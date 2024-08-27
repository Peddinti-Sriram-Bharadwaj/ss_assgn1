#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
int fd;
FILE *file;
char line[256];
fd = open("test1.txt", O_RDONLY);
file = fdopen(fd, "r");
while(fgets(line, sizeof(line), file)) printf("%s", line);
fclose(file);
return 0;
}
