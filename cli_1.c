/** Demo program to show the Command Line Arguments of
    a Process
**/


#include <stdio.h>
#include <string.h>

/**
   -- argc and argv are command line arguments and they are stored in the stack frame of the main()

   -- argv is an array of pointers to string
**/

int main (int argc, char *argv[])
{
   int count = 0;

   printf("\n Demonstrate the command line arguments");
   printf("\n The value of argc is (%d) ", argc);

   while ( count < argc )
   {
       printf("\n (%d) th string is (%s) \n", count, argv[count]);
       count++;
   }
}

//gcc cli_1.c -o cli_1
// ./cli_1 This is a command line demo
