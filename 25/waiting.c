/*
Name : 25
Author : Sriram Bharadwaj
Description : 
Write a program to create three child processes. The parent should wait for a particular child (use waitpid system call). 
Date :- Aug 31 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int pid1, pid2, pid3;

pid1 = fork();

if(pid1 == 0){
printf("This is child process 1\n");
sleep(5);
exit(0);
}
pid2 = fork();
if(pid2 == 0){
printf("This is child process 2\n");
sleep(5);
exit(0);
}

pid3 = fork();

if(pid3 == 0){
printf("This is child process 3\n");
sleep(5);
exit(0);
}

printf("I am the parent proces\n");
int status;
waitpid(pid1,&status,0);
if(WIFEXITED(status)){
printf("child 1 exited with status %d\n", WEXITSTATUS(status));
}

return 0;
}

/*
This is child process 1
I am the parent proces
This is child process 2
This is child process 3
child 1 exited with status 0
*/
