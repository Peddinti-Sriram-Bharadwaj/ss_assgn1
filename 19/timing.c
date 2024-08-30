#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>

int main(){
struct timespec start, end;
pid_t pid;

clock_gettime(CLOCK_MONOTONIC, &start);
pid = getpid();
clock_gettime(CLOCK_MONOTONIC, &end);

long long time;
time = (end.tv_sec -start.tv_sec)* 1000000000L + (end.tv_nsec - start.tv_nsec);
printf("%lld", time);
return 0;
}
