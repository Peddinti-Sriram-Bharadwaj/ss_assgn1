/*
Name : 17
Author : Sriram Bharadwaj
Description : 
Write a program to simulate online ticket reservation. Implement write lock 
Write a program to open a file, store a ticket number and exit. Write a separate program, to open the file, implement write lock, read the ticket number, increment the number and print the new ticket number then close the file. 
Date :- Aug 31 2024
*/

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

/*
1
Ticket number booked by the user: 2615
*/
