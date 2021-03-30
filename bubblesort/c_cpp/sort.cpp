#include <iostream>

void swap(int &xp, int &yp) 
{ 
    int temp = xp; 
    xp = yp; 
    yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++){
           if (arr[j] > arr[j+1]) 
              swap(arr[j], arr[j+1]);
       }
   }
       
    std::cout << "Sorted. Last: " << arr[n-1] << " Correct: " << n - 1 << std::endl;
}

int* genArr(int len){
    int* arr = new int[len];
    int idx = 0;
    for (int i = len - 1; i >= 0; i--){
        arr[idx++] = i;
    }
    return arr;
}

int main() 
{
    int n = 50000;
    int* arr = genArr(n);
    bubbleSort(arr, n);
    delete[] arr;
    return 0; 
}