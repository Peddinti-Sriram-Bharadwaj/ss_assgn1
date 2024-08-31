#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct ticket{
int ticket_number;
};

int main(){
int fd;
struct ticket tkt;
struct flock file_lock;

fd = open("ticket_number.txt", O_RDWR | O_CREAT, 0666);

file_lock.l_type = F_WRLCK;
file_lock.l_whence = SEEK_SET;
file_lock.l_start = 0;
file_lock.l_len = sizeof(struct ticket);
file_lock.l_pid = getpid();

fcntl(fd, F_SETLKW, &file_lock);
read(fd, &tkt, sizeof(tkt));

tkt.ticket_number++;
lseek(fd, 0 , SEEK_SET);
sleep(10);
write(fd, &tkt, sizeof(tkt));

printf("Ticket number booked by the user: %d\n", tkt.ticket_number);

file_lock.l_type = F_UNLCK;
fcntl(fd, F_SETLK, &file_lock);

close(fd);
return 0;


}
