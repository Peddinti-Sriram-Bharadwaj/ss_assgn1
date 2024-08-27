#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){

int fd1;
fd1 = open("test1.txt",O_RDWR | O_CREAT,0644);
printf("%d\n",fd1);
char *stuff1 = "1234567890\n";
char *stuff2 = "0987654321\n";
write(fd1,stuff1,10);
off_t offset = lseek(fd1, 10, SEEK_CUR);
write(fd1,stuff2,10);

close(fd1);
return 0;
}
