#include <stdio.h>

//1
void arrayToString(int arr[], int size){
  int i;
  printf("[ ");
  for (i = 0; i < size; i++){
    printf("%d ",arr[i]);
  }
  printf("]\n");
}
//2
int arrayAverage(int arr[], int size){
  int i;
  int sum = 0;
  for (i = 0; i < size; i++){
    sum += arr[i];
  }
  return sum / size;
}
//3
void copyArrays(int *arr1, int *arr2, int size){
  int i;
  for (i = 0; i < size; i++){
    arr2[i] = arr1[i];
  }
}

int main(){
  int arr[5] = {12,5,2,1,9};
  //1
  arrayToString(arr,5);
  //2
  printf("Average of Values: %d\n",arrayAverage(arr,5));
  //3
  int copy[5];
  copyArrays(arr,copy,5);
  arrayToString(arr,5);
  arrayToString(copy,5);
  return 0;
}
