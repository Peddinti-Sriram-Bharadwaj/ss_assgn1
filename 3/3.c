/*
Name : 3.c
Author : Sriram Bharadwaj
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date :- Aug 24 2024
*/



#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
int fd1 = creat("test1.txt", 0644);
printf("%d\n", fd1);
return 0;
}
/*
3
*/
