public class App {
    void bubbleSort(int arr[]) 
    { 
        int n = arr.length; 
        for (int i = 0; i < n-1; i++) 
            for (int j = 0; j < n-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                { 
                    // swap arr[j+1] and arr[j] 
                    int temp = arr[j]; 
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
        System.out.format("Sorted. Last: " + arr[n-1] + " Correct: " + (n - 1) + "\n");
    }

    public static int[] genArr(int n){
        int idx = 0;
        int[] arr = new int[n];
        for (int i = n - 1; i >= 0; i--){
            arr[idx++] = i;
        }
        return arr;
    }

    public static void main(String args[]){
        App ob = new App();
        int arr[] = genArr(50000);
        ob.bubbleSort(arr);
        return;
    }
}
