using System;

class Sort
{ 
    static void bubbleSort(int []arr) 
    { 
        int n = arr.Length; 
        for (int i = 0; i < n - 1; i++) 
            for (int j = 0; j < n - i - 1; j++) 
                if (arr[j] > arr[j + 1]) 
                {
                    int temp = arr[j]; 
                    arr[j] = arr[j + 1]; 
                    arr[j + 1] = temp; 
                }
        Console.WriteLine("Sorted. Last:" + arr[n-1].ToString() + " Correct: " + (n-1).ToString());
    }

    static int[] genArr(int len){
        int[] arr = new int[len];
        int idx = 0;
        for (int i = len - 1; i >= 0; i--){
            arr[idx++] = i;
        }
        return arr;
    }

    public static void Main() 
    { 
        int []arr = genArr(50000); 
        bubbleSort(arr); 
    }
}