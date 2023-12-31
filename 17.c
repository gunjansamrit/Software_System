/*
============================================================================
Name : 17.c
Author : Samrith Gunjan Namdeo
Description : Write a program to simulate online ticket reservation. Implement write lock
              Write a program to open a file, store a ticket number and exit. Write a separate program, to
              open the file, implement write lock, read the ticket number, increment the number and print
              the new ticket number then close the file
Date: 09th Sept, 2023.
============================================================================
*/


#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	int fd=open("ticket",O_CREAT|O_RDWR);
	//printf("%d\n",fd);
	struct flock lock;
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=2;
	lock.l_pid=getpid();
	int l=fcntl(fd,F_SETLKW,&lock);
	
	char buff[3]={'0','0','\0'};
	read(fd,buff,2);
	int available=(buff[0]-'0')*10+(buff[1]-'0');
	//printf("available - %d\n",available);
	if(available>0)
	{
		printf("press enter to confirm\n");
		getchar();
		available--;
		buff[0]='0'+(available/10);
		buff[1]='0'+(available%10);
		lseek(fd,0,SEEK_SET);
		write(fd,buff,2);
		lock.l_type=F_UNLCK;
		fcntl(fd,F_SETLKW,&lock);
		printf("Ticket number %d booked\n",available+1);
	}
	else
	{
		printf("tickets not available\n");
	}
	return 0;
}
