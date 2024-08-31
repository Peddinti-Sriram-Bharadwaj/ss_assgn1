#include <unistd.h>
#include <stdio.h>

int main(){
execl("/bin/ls", "ls", "-Rl", NULL);
}
