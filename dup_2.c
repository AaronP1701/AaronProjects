/**
dup() system call - application to write the output to a file instead of screen.
**/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

void main ()
{
    int fd;
    fd = open("newFile2.log", O_RDWR | O_CREAT, 0767);

    if ( fd == -1 )
    {
        printf("\n open() has failed - errno = (%d)\n", errno);
        perror("ERROR:");
    }
    else {
        printf("\n open() system call was executed successfully\n");
    }

    close(1); //close the standard output
    dup(fd);

    printf("\n Output not written to screen, rather written to the file using dup() system call \n");
}

