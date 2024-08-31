#include <unistd.h>
#include <stdio.h>

int main(){
char *args[] = {"ls", "-Rl", NULL};
execv("/bin/ls", args);
return 0;

}
