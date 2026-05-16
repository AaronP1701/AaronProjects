#include <stdio.h>

int lists(){
    int array[] = {2,1,2,3};
     size_t len = sizeof(array)/sizeof(array[0]);
}


int more_lists(int a, int b){
    int array[] = {1,2,3,4};
    size_t len = sizeof(array)/sizeof(array[0]);

    array[0] = a;
     for (int i = 0; i<len; i++){
        printf("%d",array[i]);
     }


   // return ("\n", array);
}

int main() {
  int arrayBulb[] = {2,3,1,43,9};
  
  size_t len = sizeof(arrayBulb)/sizeof(arrayBulb[0]);
  int i;

  for (i = 0; i < len; i++){
    printf("%d\n",arrayBulb[i]);
}
more_lists(2,5);
}
