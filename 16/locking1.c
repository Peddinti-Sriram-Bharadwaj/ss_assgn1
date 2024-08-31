#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
int fd1;
fd1 = open("test1.txt",O_RDWR);
struct flock lock1;
lock1.l_type = F_WRLCK;
lock1.l_whence = 0;
lock1.l_start = 0;
lock1.l_len = 10;
lock1.l_pid = getpid();

int l1 = fcntl(fd1,F_SETLK,&lock1);

if(l1 < 0){
printf("write lock unavailible\n");
while(l1<0)
l1 = fcntl(fd1,F_SETLK, &lock1);
}
if(l1>=0)
printf("lock availible for writing\n");
char buff[30];
scanf("%s",buff);
write(fd1,buff,5);
lock1.l_type = F_UNLCK;
fcntl(fd1,F_SETLK,&lock1);
printf("the file is unlocked after writing\n");

struct flock lock2;
lock2.l_type = F_RDLCK;
lock2.l_whence = 0;
lock2.l_start = 0;
lock2.l_len = 10;
lock2.l_pid = getpid();

int l2 = fcntl(fd1,F_SETLK, &lock2);

if(l2<0){
printf("read lock unavailible\n");
while(l2<0)
l2 = fcntl(fd1,F_SETLK, &lock2);
}
close(fd1);
fd1 = open("test1.txt", O_RDONLY);
if(l2>=0)
printf("read lock availible\n");
char buff2[30];
int nr = read(fd1, buff2,5);
printf("%d\n", nr);
lock2.l_type = F_UNLCK;
fcntl(fd1,F_SETLK, &lock2);
printf("the file is unlocked from read\n");
printf("%s\n", buff2);
return 0;
}
