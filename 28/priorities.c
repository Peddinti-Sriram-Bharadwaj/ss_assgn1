/*
Name : 28
Author : Sriram Bharadwaj
Description : 
Write a program to get maximum and minimum real time priority. 
Date :- Aug 31 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>

int main(){
int fifomax = sched_get_priority_max(SCHED_FIFO);
int fifomin = sched_get_priority_min(SCHED_FIFO);
int rrmax = sched_get_priority_max(SCHED_RR);
int rrmin = sched_get_priority_min(SCHED_RR);

printf("SCHED_FIFO :- min = %d, max = %d\n", fifomax, fifomin);
printf("SCHED_RR :- min = %d, max = %d\n", rrmax, rrmin);
return 0;
}
/*
SCHED_FIFO :- min = 47, max = 15
SCHED_RR :- min = 47, max = 15
*/
