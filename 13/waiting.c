#include <sys/types.h>
#include <sys/stat.h>
#include <sys/select.h>
#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
struct timeval tv;

fd_set inputs;
FD_ZERO(&inputs);
FD_SET(0,&inputs);

tv.tv_sec = 10;
tv.tv_usec = 0;

int res = select(0 + 1,&inputs, NULL, NULL, &tv);
if (res == 0)
printf("no data availible in the first 10 seconds\n");
else
printf("data found\n");
fflush(stdout);
close(0);
return 0;
}
