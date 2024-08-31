/*
Name : 10
Author : Sriram Bharadwaj
Description : 

 Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10 bytes (use lseek) and write again 10 bytes. 
a. check the return value of lseek 
b. open the file with od and check the empty spaces in between the data. 
Date :- Aug 27 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){

int fd1;
fd1 = open("test1.txt",O_RDWR | O_CREAT,0644);
printf("%d\n",fd1);
char *stuff1 = "1234567890\n";
char *stuff2 = "0987654321\n";
write(fd1,stuff1,10);
off_t offset = lseek(fd1, 10, SEEK_CUR);
write(fd1,stuff2,10);

close(fd1);
return 0;
}

