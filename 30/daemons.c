#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

int main(){
int pid = fork();

if(pid>0) exit(0);

setsid();

while(1)
{
time_t now = time(NULL);
struct tm *t = localtime(&now);

if(t->tm_hour == 16 && t->tm_min == 32){
system("/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/30/log_pwd.sh");
printf("yes\n");
sleep(10);


}
sleep(5);
}

return 0;
}
