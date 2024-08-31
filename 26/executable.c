#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
int ret;

ret = execl("/usr/bin/vi", "vi", "/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/26/test1.txt",NULL);
if(ret == -1)
perror("execl");

return 0;
}
