/*
Name : 11
Author : Sriram Bharadwaj
Description : 


 11. Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not. 
a. use dup 
b. use dup2 
c. use fcntl 
Date :- Aug 29 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(){
int fd1;
fd1 = creat("test1.txt", 0644);
char buff[30] = "my name is optimus primei\n";
write(fd1,buff, 25);
printf("the value of fd1 is :%d\n",(int)fd1);

int fd2 = open("test1.txt", O_RDWR);
close(fd1);
int fd3 = dup(fd2);
printf("the value of fd2 is :%d\n",(int) fd2);
printf("the value of fd3 is :%d\n",(int) fd3);
dup2(fd2,fd1);
printf("the new value of fd3 is :%d\n", (int) fd3);
printf("the new value of fd1 is :%d\n", (int) fd1);
int fd4 = fcntl(fd2,F_DUPFD,0);
printf("the value of fd4 is : %d\n", (int) fd4);
printf("the new value of fd2 is %d\n", (int) fd2);
int nr =  write(fd2,buff,25);
printf("%d\n", nr);
write(fd3,buff,25);
printf("%d\n", nr);
write(fd4,buff,25);
printf("%d\n",nr);
return 0;

}
/*
the value of fd1 is :3
the value of fd2 is :4
the value of fd3 is :3
the new value of fd3 is :3
the new value of fd1 is :3
the value of fd4 is : 5
the new value of fd2 is 4
25
25
25
*/
