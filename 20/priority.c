#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/resource.h>
#include <stdio.h>

int main(){
int pid;
pid = getpid();
pid_t priority;
priority = getpriority(PRIO_PROCESS,pid);
printf("the priority of process with pid %d is %d\n",pid, (int) priority);
nice(10);
priority = getpriority(PRIO_PROCESS, pid);
printf("the new priority of process with pid %d is %d\n", pid, (int) priority);

return 0;
}
