#include <unistd.h>
#include <stdio.h>

int main(){
execlp("ls", "ls", "-Rl", NULL);
return 0;

}
