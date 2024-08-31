/*
Name : 4.c
Author : Sriram Bharadwaj
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also. 
Date :- Aug 25 2024
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
int fd1;
fd1 = open("test1.txt",O_RDWR);
printf("%d\n", fd1);
if (fd1 !=-1){
printf("file opened successfully with read and write mode\n");
}
else{
printf("error couldnt open file in RDWR mode  \n");
}
int fd2;
fd2 = open("test1.txt",O_RDWR | O_EXCL);
printf("%d\n", fd2);

if (fd2 !=-1){
printf("file opened successfilly with O_EXCL flag\n");
}

else{
printf("error couldn't open file with O_EXCL flag");
}

return 0;

}
/*
4
file opened successfilly with O_EXCL flag
*/

