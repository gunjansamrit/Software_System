/*
============================================================================
Name : 22.c
Author : Samrith Gunjan Namdeo
Description : Write a program, open a file, call fork, and then write to the file by both the child as well as the
              parent processes. Check output of the file.
Date: 09th Sept, 2023.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{


	 int fd=open("22temp.txt",O_EXCL|O_CREAT|O_RDWR);

	 if(!fork())
	 {
		  write(fd,"written from child :::::::::::::::::::::::::::\n",22);
		 }
	 else
	 {
		 write(fd,"written from parent \n",22);

		}
      return 0;

}
