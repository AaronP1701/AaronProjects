
/**
Program using lseek() system call that reads 10 characters from file “info” and print on screen.
Skip next 5 characters and again read 10 characters and write on screen.

-- This solution is from: https://dextutor.com/lseek-system-call/
**/

#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    int n;
    int fd;
    char buff[10];

    fd = open("info",O_RDWR);

    read(fd,buff,10);

    write(1,buff,10);

    lseek(fd,5,SEEK_CUR);//skips 5 characters from the current position

    read(fd,buff,10);

    write(1,buff,10);
}
