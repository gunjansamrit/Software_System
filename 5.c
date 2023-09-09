/*
============================================================================
Name : 5.c
Author : Samrith Gunjan Namdeo
Description : Write a program to create five new files with infinite loop. Execute the program in the background
              ANd check the file descriptor table at /proc/pid/fd.
Date: 09th Sept, 2023.
============================================================================
*/



#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd1=creat("/home/vboxuser/Documents/software_system/file1",O_CREAT);
      int fd2=creat("/home/vboxuser/Documents/software_system/file2",O_CREAT);

      int fd3=creat("/home/vboxuser/Documents/software_system/file3",O_CREAT);

      int fd4=creat("/home/vboxuser/Documents/software_system/file4",O_CREAT);

      int fd5=creat("/home/vboxuser/Documents/software_system/file5",O_CREAT);

      while(1)
      {

      }

return 0;
}

	
