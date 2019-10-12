#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    arr[i] = rand();
  }
  arr[9] = 0;
  printf("FIRST ARRAY\n");
  for (int i = 0; i < 10; i++){
    printf("array value: %d\n", arr[i]);
  }
  int arr2[10];
  int *p = &arr;
  int *q = &arr2;
  for (int i = 0; i < 10; i++){
    *(q + i) = *(p + 9 - i);
  }
  printf("\nSECOND ARRAY\n");
  for (int i = 0; i < 10; i++){
    printf("array value: %d\n", *(q + i));
  }
}
