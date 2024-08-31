#include <unistd.h>
#include <stdio.h>

int main(){
char *envp[] = {NULL};

execle("/bin/ls", "ls", "-Rl", NULL, envp);
return 0;
}
