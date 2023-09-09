/*
============================================================================
Name : 1.c
Author : Samrith Gunjan Namdeo
Description : Create the following types of a files using (i) shell command (ii) system call
              a. soft link (symlink system call)
              b. hard link (link system call)
              c. FIFO (mkfifo Library Function or mknod system call)
Date: 09th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){

	 int v =symlink("/home/vboxuser/Documents/Llink","destSL");

	 if(v<0)
	 {
		 perror("Failed"); return 1 ;}

	 int f=link("/home/vboxuser/Documents/Llink","destHL");
	  if(f<0)
	  {
		  perror("Failed");return 1;}

	  int e=mknod("destFIFO",S_IFIFO,0);

	  if(e<0)
		  perror("Failed");
	  return 0;
}
