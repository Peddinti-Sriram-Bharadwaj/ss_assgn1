/*
Name : 27d
Author : Sriram Bharadwaj
Description : 
Write a program to execute ls -Rl by the following system calls 
a. execl 
b. execlp 
c. execle 
d. execv 
e. execvp 
Date :- Aug 31 2024
*/

#include <unistd.h>
#include <stdio.h>

int main(){
char *args[] = {"ls", "-Rl", NULL};
execv("/bin/ls", args);
return 0;

}
/*
xtotal 400
-rw-r--r--  1 srirambharadwaj  staff    944 Aug 31 22:15 27a.c
-rwxr-xr-x  1 srirambharadwaj  staff  33432 Aug 31 15:24 27a.out
-rw-r--r--  1 srirambharadwaj  staff    951 Aug 31 22:18 27b.c
-rwxr-xr-x  1 srirambharadwaj  staff  33432 Aug 31 15:25 27b.out
-rw-r--r--  1 srirambharadwaj  staff    985 Aug 31 22:19 27c.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:35 27c.out
-rw-r--r--  1 srirambharadwaj  staff    125 Aug 31 15:36 27d.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:36 27d.out
-rw-r--r--  1 srirambharadwaj  staff    120 Aug 31 15:38 27e.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:38 27e.out
*/
