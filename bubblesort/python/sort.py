def bubbleSort(arr): 
    n = len(arr) 
    for i in range(n):
        for j in range(0, n-i-1): 
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j]
    
    print("Sorted. Last: " + str(arr[n-1]) + " Correct: " + str(n - 1))

n = 50000
arr = [0] * n
idx = 0
for i in range(n-1, -1, -1):
    arr[idx] = i
    idx += 1

bubbleSort(arr)
