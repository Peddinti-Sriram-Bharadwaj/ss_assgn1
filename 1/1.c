/*
Name : 1.c
Author : Sriram Bharadwaj
Description 1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)

Date :- Aug 24 2024

*/


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
int sl, hl, fifo;
sl = symlink("test1.txt", "test2.txt");
hl = link("test1.txt", "test3.txt");
fifo = mkfifo("test4.txt", 0622);
printf("%d %d %d\n",sl, hl,fifo);
return 0;
}

/* 
Output :- 0 0 0

*/
