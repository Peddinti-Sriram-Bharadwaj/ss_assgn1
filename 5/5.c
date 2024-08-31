/*
Name : 5.c
Author : Sriram Bharadwaj
Description :Write a program to create five new files with infinite loop. Execute the program in the background and check the file descriptor table at /proc/pid/fd. 
Date :- Aug 25 2024
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
int count = 0;
while(true){
for(int i = 0;i<5;i++){
char filename[20];
sprintf(filename, "test_%d.txt", count);
creat(filename, 0644);
count ++;
}
}
return 0;
}

/*
files are created. and can be viewed with ls command
*/

