#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
int fd1;
fd1 = creat("test1.txt", 0644);
close(fd1);
fd1 = open("test1.txt",O_RDWR);
char buff[30] = "My name is Optimus Prime\\n";
write(fd1,buff,25);
int mode = fcntl(fd1,F_GETFL);
mode = mode & O_ACCMODE;
printf("%d\n",mode);
if(mode == 0)
printf("read only\n");
if(mode == 1)
printf("write only\n");
if(mode == 2)
printf("read and write mode\n");
return 0;
}
