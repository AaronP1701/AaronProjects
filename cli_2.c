/** Demo program to show the Command Line Arguments of
    a Process

    revised by student Aaron Poon
    2/8/2026
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
   -- argc and argv are command line arguments and they are stored in the stack frame of the main()

   -- argv is an array of pointers to string
**/

int main (int argc, char *argv[])
{
   int count = 0;

   printf("\n Demonstrate the command line arguments");

   if ( strstr(argv[1], "add") )
   {
       printf("\n addition result = (%d)\n", atoi(argv[2]) + atoi(argv[3]));
       //printf("\n addition result = (%d)\n", argv[2] + argv[3]);
   }
   else if ( strstr(argv[1], "sub") )
   {
       printf("\n subtraction result = (%d)\n", atoi(argv[2]) - atoi(argv[3]));
   }
   else if ( strstr(argv[1], "div"))
   {
        printf("\n Division result = (%d)\n", atoi(argv[2]) / atoi(argv[3]));
   }
   else
    {
        printf("\n wrong input \n");
    }
}


//gcc cli_2.c -o cli_2
// ./cli_2 add 8 3
// ./cli_2 sub 8 3
// ./cli_2 mul 8 3
