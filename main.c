#include <stdio.h>

void arrayToString(int arr[], int size){
  int i;
  printf("[ ");
  for (i = 0; i < size; i++){
    printf("%d ",arr[i]);
  }
  printf("]\n");
}

int main(){
  int arr[5] = {12,5,2,1,9};
  arrayToString(arr,5);
  return 0;
}
