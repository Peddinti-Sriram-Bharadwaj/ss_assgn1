#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(){
int fd1;
fd1 = open("test1.txt",O_RDONLY);
int h1,h2;
h1 = link("test1.txt", "test2.txt");
h2 = link("test1.txt", "test3.txt");

struct stat file_stat;
fstat(fd1, &file_stat);
printf("Inode: %llu\n",file_stat.st_ino);
printf("# of hard links: %hu\n", file_stat.st_nlink);
printf("UID: %u\n",file_stat.st_uid);
printf("GID: %u\n",file_stat.st_gid);
printf("Size: %lld bytes\n",file_stat.st_size); 
printf("Block size: %d\n", file_stat.st_blksize);
printf("# of blocks: %lld\n", file_stat.st_blocks);
printf("time of last access: %s", ctime(&file_stat.st_atime));
printf("time of last modification: %s", ctime(&file_stat.st_mtime));
printf("time of last change: %s", ctime(&file_stat.st_ctime)); 
return 0;
}
