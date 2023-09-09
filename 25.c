/*
============================================================================
Name : 25.c
Author : Samrith Gunjan Namdeo
Description : Write a program to create three child processes. The parent should wait for a particular child (use
              waitpid system call).
Date: 09th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
		{
		int children[3];
	        for(int i=0;i<3;i++)
		{
			int pid =fork();

			if(pid==0)
			{
				int x=i+1;
				sleep(2);
				printf("child %d completed \n",x);
				return 0;
			}
			else
			{

				children[i]=pid;
			}
		}

		printf("waiting for child 3\n");
		waitpid(children[2],0,0);
		printf("child 3 completed(from parent )\n");
		return 0;
	}
