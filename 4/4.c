#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
int count = 0;
while(true){
for(int i = 0;i<5;i++){
char filename[20];
sprintf(filename, "test_%d.txt", count);
creat(filename, 0644);
count ++;
}
}
return 0;
}
