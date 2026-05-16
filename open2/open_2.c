#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void main (){

    int fd;
    fd = open("newFile.log", O_RDWR | O_CREAT, 0000); //opens file for user, sets the permission

//O_CREAT = create new file

    if ( fd == -1 )
    {
        printf("\n open() has failed - errno = (%d)\n", errno);
        perror("ERROR:");
    }
    else {
        printf("\n open() system call was executed successfully\n");
    }

}