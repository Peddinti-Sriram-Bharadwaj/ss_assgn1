/*
Name : 22
Author : Sriram Bharadwaj
Description : 
Write a program, open a file, call fork, and then write to the file by both the child as well as the parent processes. Check output of the file. 
Date :- Aug 31 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
int fd1;
fd1 = open("test1.txt", O_WRONLY);
int pd;
pd = fork();

if(pd == 0){
char buff[30] = "\nwritten from child process\n ";
write(fd1,buff,26);
}

else{
char buff[30] = "written from parent process\n";
write(fd1,buff, 27);
}

return 0;
}

/*
written from parent process
written from child proces
*/
