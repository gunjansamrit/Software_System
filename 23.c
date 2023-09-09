/*
============================================================================
Name : 23.c
Author : Samrith Gunjan Namdeo
Description : Write a program to create a Zombie state of the running program.
Date: 09th Sept, 2023.
============================================================================
*/


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	if(!fork())
	{
		printf("child( pid : %d ) Execution completed. Became ZOMBIIEE!!\n",getpid());
		 exit(0);
		}
	else
	{
		while(1)
		{

		}

	}
	return 0;

}

