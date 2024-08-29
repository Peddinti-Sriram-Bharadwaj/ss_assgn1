#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

extern char **environ;
while(*environ){
printf("%s\n",*environ);
environ++;
}

return 0;
}
