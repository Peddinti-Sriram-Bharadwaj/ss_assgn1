#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
pid_t pid;

pid = fork();

if(pid == 0){
printf("this is the pid of child process : %d\n", getpid());
printf("this is the current pid: %d\n", getppid());
}
else{
printf("this is the pid of parent process: %d\n", getpid());
printf("this is the pid of child process: %d\n", pid);
}



return 0;
}
