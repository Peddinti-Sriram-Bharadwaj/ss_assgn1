#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
int sl, hl, fifo;
sl = symlink("test1.txt", "test2.txt");
hl = link("test1.txt", "test3.txt");
fifo = mkfifo("test4.txt", 0622);
printf("%d %d %d\n",sl, hl,fifo);
return 0;
}
