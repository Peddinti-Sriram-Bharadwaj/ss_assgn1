/*
Name : 20
Author : Sriram Bharadwaj
Description : 
Find out the priority of your running program. Modify the priority with nice command. 
Date :- Aug 30 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/resource.h>
#include <stdio.h>

int main(){
int pid;
pid = getpid();
pid_t priority;
priority = getpriority(PRIO_PROCESS,pid);
printf("the priority of process with pid %d is %d\n",pid, (int) priority);
nice(10);
priority = getpriority(PRIO_PROCESS, pid);
printf("the new priority of process with pid %d is %d\n", pid, (int) priority);

return 0;
}

/*
the priority of process with pid 1120 is 0
the new priority of process with pid 1120 is 10
*/
