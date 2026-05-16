#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>
#include <string.h>


void casting(char *value){
    value[strcspn(value,"\r\n")] = '\0';

    if (strcmp(value, "1") == 0){
        printf("cool");

    }else if (strcmp(value, "0") == 0){
        printf("bad");
    }else{
        printf("error");
    }


}

int main(){

    char *val = "1";
    casting(val);
    return 0;



}