/*
============================================================================
Name : 3.c
Author : Samrith Gunjan Namdeo
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 09th Sept, 2023.
============================================================================
*/


#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	int fileDes = creat("FileDes1",O_RDWR);

	printf("%d",fileDes);

	return 0;
}

