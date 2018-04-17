#include <stdio.h>
#include <assert.h>
#include <string.h>

/*
Arrays with static extent have their elements initialised to zero by default

If the number of values in the initialiser list is less than the size of the
array, the remaining elements of the array are initialised to zero:

int allZero[10] = { 0 };

 */

 int arraysize (int a,int b);

int count (char v[],int len){
     int total = 0;

     assert( sizeof(v) / sizeof(v[0]) == len);

     while(len--){
       total+=v[len];
     }

 return total;

}



 int arraysize(int a,int b){
   int size = 0;
/*
   printf("Array %lu\n",sizeof(array) );
   printf("Array[0] %lu\n",sizeof *(array) );
   */

   size = a / b;

   return size;
 }


int main(int argc, char const *argv[]) {

  int x = 10;
  int *px = &x;
  int array[] = { 1, 2, 3, 4, 5 };
  int size = 0;
  int size1 = 0;

  char string[20] = {'0'};

  int c = 0;

  c = count(string,strlen(string));

  printf("Valore di ritorno funzione count = %4d \n", c );




  printf("Val: %lu \n", sizeof(10) );
  printf("Var: %lu \n", sizeof(x) );
  printf("Pointer: %lu \n", sizeof(px) );
  printf("Array: %lu \n", sizeof(array) );

  size = arraysize(sizeof(array),sizeof*(array));

  //size1 = sizeof(array) / sizeof*(array);

  printf("Size  = %ul \n",size );


  return 0;
}
