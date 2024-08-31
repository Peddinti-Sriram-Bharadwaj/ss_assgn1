#include <unistd.h>
#include <stdio.h>

int main(){
char *args[] = {"ls", "-Rl", NULL};
execvp("ls", args);
return 0;
}
