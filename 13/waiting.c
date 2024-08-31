#include <sys/types.h>
/*
Name : 13
Author : Sriram Bharadwaj
Description : 
13. Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to verify whether the data is available within 10 seconds or not (check in $man 2 select). 
Date :- Aug 29 2024
*/

#include <sys/stat.h>
#include <sys/select.h>
#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
struct timeval tv;

fd_set inputs;
FD_ZERO(&inputs);
FD_SET(0,&inputs);

tv.tv_sec = 10;
tv.tv_usec = 0;

int res = select(0 + 1,&inputs, NULL, NULL, &tv);
if (res == 0)
printf("no data availible in the first 10 seconds\n");
else
printf("data found\n");
fflush(stdout);
close(0);
return 0;
}

/*
hi
data found
*/
