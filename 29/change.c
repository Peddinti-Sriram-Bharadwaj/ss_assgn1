#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <string.h>

int main(){
int pid;
int policy;
struct sched_param param;
char input[10];

pid = getpid();
policy = sched_getscheduler(pid);

if(policy == SCHED_OTHER)
printf("current scheduling policy : SCHED_OTHER\n");

else if (policy == SCHED_FIFO)
printf("Current scheduling policy : SCHED_FIFO\n");

else if(policy == SCHED_RR)
printf("Current scheudling policy : SCHED_RR\n");

scanf("%9s", input);

if(strcmp(input, "FIFO") == 0)
policy  SCHED_FIFO;

else if (strcmp(input, "RR") == 0)
policy = SCHED_RR:

param.sched_priority = 1;
sched_setscheduler(pid, policy, &param);

return 0;
}
