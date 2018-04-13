#include <stdio.h>

/*
Arrays with static extent have their elements initialised to zero by default

If the number of values in the initialiser list is less than the size of the
array, the remaining elements of the array are initialised to zero:

int allZero[10] = { 0 };

 */

 int arraysize(int *array){
   int size = 0;
/*
   printf("Array %lu\n",sizeof(array) );
   printf("Array[0] %lu\n",sizeof *(array) );
   */

   size = sizeof(array) / sizeof(array[0]);

   return size;
 }


int main(int argc, char const *argv[]) {

  int x = 10;
  int *px = &x;
  int array[] = { 1, 2, 3, 4, 5 };
  int size = 0;

  printf("Val: %lu \n", sizeof(10) );
  printf("Var: %lu \n", sizeof(x) );
  printf("Pointer: %lu \n", sizeof(px) );
  printf("Array: %lu \n", sizeof(array) );

  size = arraysize(array);

  printf("Size  = %d \n",size );

  return 0;
}
