#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int pid;
pid = fork();

if (pid == 0){
printf("this is the child process\n");
sleep(10);
printf("I am now an orphan. my new parent is %d\n", (int)getppid());
}
else{
printf("this is the parent process\n");
printf("I am now exiting to orphan my child\n");
}

return 0;
}
