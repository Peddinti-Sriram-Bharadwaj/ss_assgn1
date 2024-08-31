/*
Name : 8
Author : Sriram Bharadwaj
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read. Close the file when end of file is reached.
Date :- Aug 27 2024
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
int fd;
FILE *file;
char line[256];
fd = open("test1.txt", O_RDONLY);
file = fdopen(fd, "r");
while(fgets(line, sizeof(line), file)) printf("%s", line);
fclose(file);
return 0;
}

/*
line 1
line 2
line 3
line 4
line 5
line 6
line 7
line 8
line 9 
line 10
*/
