/*
============================================================================
Name : 20.c
Author : Samrith Gunjan Namdeo
Description : Find out the priority of your running program. Modify the priority with nice command.
Date: 09th Sept, 2023.
============================================================================
*/




#include<stdio.h>
#include<unistd.h>
#include <sys/time.h>
       #include <sys/resource.h>


int main()
{
	int priority= getpriority(PRIO_PROCESS,0);

	printf(" Priority of the current process is %d\n",priority);

	int nic=nice(3);

	priority=getpriority(PRIO_PROCESS,0);
	printf("priority changed to %d\n",priority);
	
	printf("%d",nic);

	return 0;

}
