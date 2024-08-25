#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
char buffer[100];
ssize_t bytes;

bytes = read(0,buffer, 2048);
write(1,buffer, bytes);
return 0;
}
