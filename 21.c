/*
============================================================================
Name : 21.c
Author : Samrith Gunjan Namdeo
Description : Write a program, call fork and print the parent and child process id.
Date: 09th Sept, 2023.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include <sys/time.h>
       #include <sys/resource.h>
#include<sys/types.h>
#include<wait.h>
int main(void)
{

	 if(!fork())
	 {
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 printf(" pid of childb%d\n",getpid());
		 
	 }
	 else
	 {
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 printf("pid of parent %d\n",getpid());
		 
		 
	}
	
	

	 return 0;

}

