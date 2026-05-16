/**
This code will create a new file in Read-Write mode called: newFile.log
**/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void main ()
{
    int fd;
    //fd = open("startup", O_RDONLY); //write only mode
    //fd = open("newFile.log", O_RDWR | O_CREAT, 0774);
    //using the symbolic constants
    fd = open("newFile.log", O_RDWR | O_CREAT, S_IRWXU|S_IRWXG|S_IROTH);

    if ( fd == -1 )
    {
        printf("\n open() has failed - errno = (%d)\n", errno);
        perror("ERROR:");
    }
    else {
        printf("\n open() system call was executed successfully\n");
    }
}

