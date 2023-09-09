/*
============================================================================
Name : 4.c
Author : Samrith Gunjan Namdeo
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 09th Sept, 2023.
============================================================================
*/




#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	int fileDes= open("FileDes1",O_CREAT|O_EXCL,0600);

	if(fileDes<0)
	{
		printf("Failed to Open");
	}
	else
	{
	printf("Open");
	}
return 0;
}

