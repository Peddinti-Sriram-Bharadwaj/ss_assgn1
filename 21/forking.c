/*
Name : 21
Author : Sriram Bharadwaj
Description : 
Write a program, call fork and print the parent and child process id. 
Date :- Aug 30 2024
*/


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
pid_t pid;

pid = fork();

if(pid == 0){
printf("this is the pid of child process : %d\n", getpid());
printf("this is the current pid: %d\n", getppid());
}
else{
printf("this is the pid of parent process: %d\n", getpid());
printf("this is the pid of child process: %d\n", pid);
}

sleep(30);

return 0;
}

/*
this is the pid of parent process: 1147
this is the pid of child process: 1148
this is the pid of child process : 1148
this is the current pid: 1147
*/
