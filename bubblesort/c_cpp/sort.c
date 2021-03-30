#include <stdlib.h>
#include <stdio.h>
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
   int i, j;
   #pragma omp parallel for schedule(dynamic, 8)
   for (i = 0; i < n-1; i++) 
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]);
    printf("Sorted. Last: %d Correct %d\n", arr[n-1], n - 1);
}

int* genArr(int len){
    int* arr = (int*)malloc(sizeof(int) * len);
    int idx = 0;
    for (int i = len - 1; i >= 0; i--){
        arr[idx++] = i;
    }
    return arr;
}

void genArr2(int* arr, int len){
    int idx = 0;
    for (int i = len - 1; i >= 0; i--){
        arr[idx++] = i;
    }
}

int main() 
{
    int n = 50000;
    //int* arr = genArr(n);

    int arr[n];
    genArr2(arr, n);
    bubbleSort(arr, n);
    //free(arr);
    return 0; 
} 