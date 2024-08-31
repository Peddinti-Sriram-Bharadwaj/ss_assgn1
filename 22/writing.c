#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
int fd1;
fd1 = open("test1.txt", O_WRONLY);
int pd;
pd = fork();

if(pd == 0){
char buff[30] = "written from child process\n\n ";
write(fd1,buff,26);
}

else{
char buff[30] = "written from parent process\n";
write(fd1,buff, 27);
}

return 0;
}
