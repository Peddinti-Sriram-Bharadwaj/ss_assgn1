/*
Name : 18
Author : Sriram Bharadwaj
Description : 
18. Write a program to perform Record locking. 
a. Implement write lock 
b. Implement read lock 
Create three records in a file. Whenever you access a particular record, first lock it then modify/access to avoid race condition. 
Date :- Aug 31 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
int fd;
struct flock fl;
int ri;
int start;
char buffer[8] = {0};
int tn;
int tc;
int found = 0;

fd = open("records.txt", O_RDWR);

printf("Enter the record number: ");
scanf("%d",&ri);

start = (ri-1)*7;
lseek(fd, start, SEEK_SET);

memset(&fl, 0, sizeof(fl));
fl.l_type = F_RDLCK;
fl.l_whence = SEEK_SET;
fl.l_start = start;
fl.l_len = 7;

fcntl(fd, F_SETLKW, &fl);

read(fd, buffer, 7);

if(sscanf(buffer, "%d %d", &tn, &tc) == 2){
found = 1;
}

if(!found){
printf("Record not found.\n");
close(fd);
exit(1);
}

printf("Train number: %d\n", tn);
printf("Tickets count: %d\n", tc);

fl.l_type = F_UNLCK;
fcntl(fd, F_SETLK, &fl);
close(fd);
return 0;
}

/*
Enter the record number: 1
Train number: 1
Tickets count: 98
*/


