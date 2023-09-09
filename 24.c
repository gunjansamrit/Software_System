/*
============================================================================
Name : 24.c
Author : Samrith Gunjan Namdeo
Description : Write a program to create an orphan process.
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
		printf("parent pid after orphan - %d\n",getppid());
		printf("press enter to complete child execution \n");

		getchar();

		printf("child execution completed\n");

	}
	else{

		printf("actual parent pid -- %d \n",getpid());

	printf("parent execution completed \n");
	return 0;
	}


//printf(" child execution completed \n");

return 0;

} 
