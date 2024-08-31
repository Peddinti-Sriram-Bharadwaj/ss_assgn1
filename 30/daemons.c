/*
Name : 30
Author : Sriram Bharadwaj
Description : 
Write a program to run a script at a specific time using a Daemon process. 
Date :- Aug 31 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

int main(){
int pid = fork();

if(pid>0) exit(0);

setsid();

while(1)
{
time_t now = time(NULL);
struct tm *t = localtime(&now);

if(t->tm_hour == 22 && t->tm_min == 29){
system("/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30/log_pwd.sh");
printf("yes\n");
sleep(10);


}
sleep(5);
}

return 0;
}
/*
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
Current directory: /Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30
*/
