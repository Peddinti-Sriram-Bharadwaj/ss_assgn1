#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main(){
char path[30];
scanf("%s",path);
int fd1;
fd1 = creat(path, 0644);
struct stat file_stat;
fstat(fd1,&file_stat);

switch(file_stat.st_mode & S_IFMT){
case S_IFBLK: printf("block device\n"); break;
case S_IFCHR: printf("character device\n"); break;
case S_IFDIR: printf("directory\n"); break;
case S_IFIFO: printf("FIFO/pipe\n"); break;
case S_IFLNK: printf("symlink\n"); break;
case S_IFREG: printf("regular file\n"); break;
case S_IFSOCK: printf("socket\n"); break;
default: printf("unknown\n"); break;
}

return 0;
}
