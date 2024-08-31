/*
Name : 27b
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
execlp("ls", "ls", "-Rl", NULL);
return 0;

}
/*
total 400
-rw-r--r--  1 srirambharadwaj  staff    944 Aug 31 22:15 27a.c
-rwxr-xr-x  1 srirambharadwaj  staff  33432 Aug 31 15:24 27a.out
-rw-r--r--  1 srirambharadwaj  staff     98 Aug 31 15:25 27b.c
-rwxr-xr-x  1 srirambharadwaj  staff  33432 Aug 31 15:25 27b.out
-rw-r--r--  1 srirambharadwaj  staff    132 Aug 31 15:35 27c.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:35 27c.out
-rw-r--r--  1 srirambharadwaj  staff    125 Aug 31 15:36 27d.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:36 27d.out
-rw-r--r--  1 srirambharadwaj  staff    120 Aug 31 15:38 27e.c
-rwxr-xr-x  1 srirambharadwaj  staff  33560 Aug 31 15:38 27e.out
*/
