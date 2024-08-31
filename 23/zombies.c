/*
Name : 23
Author : Sriram Bharadwaj
Description : 
Write a program to create a Zombie state of the running program. 
Date :- Aug 31 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int pid = fork();

if (pid == 0){
printf("this is the childprocess \n");
printf("I am now exiting to become a zombie proces while my parent is still running\n");
exit(0);
}
else{
printf("this is the parent process \n");
printf("my child process has now exited. it is a zombie now\n");
sleep(10);
}
printf("the parent is now exiting. the child is now no longer a zombie\n");
return 0;
}

/*
this is the parent process 
my child process has now exited. it is a zombie now
this is the childprocess 
I am now exiting to become a zombie proces while my parent is still running
the parent is now exiting. the child is now no longer a zombie
*/
