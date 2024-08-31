/*
Name : 6.c
Author : Sriram Bharadwaj
Description :Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls 
Date :- Aug 26 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
char buffer[100];
ssize_t bytes;

bytes = read(0,buffer, 2048);
write(1,buffer, bytes);
return 0;
}

/*
the input entered will be displayed
*/
