/*
Name : 26
Author : Sriram Bharadwaj
Description : 
Write a program to execute an executable program. 
a. use some executable program 
b. pass some input to an executable program. (for example execute an executable of $./a.out name) 
Date :- Aug 31 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
int ret;

ret = execl("/usr/bin/vi", "vi", "/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/26/test1.txt",NULL);
if(ret == -1)
perror("execl");

return 0;
}
/*
this is edited, launched from the C program
*/
