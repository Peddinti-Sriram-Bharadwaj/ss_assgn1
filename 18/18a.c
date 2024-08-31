#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
int fd;
struct flock fl;
int ri;
int start;
char buffer[8] = {0};
int tn;
int tc;
int ntc;
int found = 0;

fd = open("records.txt", O_RDWR);

printf("Enter the record number :");
scanf("%d", &ri);
start = (ri-1)*7;
lseek(fd, start, SEEK_SET);

read(fd, buffer, 7);

if (sscanf(buffer, "%d %d", &tn, &tc) == 2){
found = 1;
}

if(!found){
printf("Record not found.\n");
close(fd);
exit(1);
}

memset(&fl, 0, sizeof(fl));
fl.l_type = F_WRLCK;
fl.l_whence = SEEK_SET;
fl.l_start = start;
fl.l_len = 7;

fcntl(fd, F_SETLKW, &fl);

printf("current tickets count for the train %d: %d\n", tn, tc);

if(tc >0){
tc --;
snprintf(buffer, sizeof(buffer), "%d %d\n", tn, tc);
lseek(fd, start, SEEK_SET);
write(fd, buffer, 7);

printf("Record updated successfully, new tickets count: %d\n", tc);
}
else
printf("No tickets availible.\n");

fl.l_type = F_UNLCK;
fcntl(fd, F_SETLK, &fl);

close(fd);
return 0;
}
