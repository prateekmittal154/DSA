# QUICK SORT - DIVIDE AND CONQUER

+ At each step we place an element at its correct position
+ All elements to its left are smaller than it and the elements on the right are larger
+ This correctly placed element gives two sub-arrays- One on the left and the other on right
+ We repeat the quick sort procedure on both the sub arrays till the complete array is sorted


``` Python
#Python Program for recursive Quick Sort

def partition(arr,low,high):
    i=(low-1)
    pivot =arr[high]
    
    for j in range(low,high):
        
        if arr[j] <= pivot:
            i=i+1
            arr[i],arr[j]=arr[j],arr[i]
        
    
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return(i+1)
    
def quickSort(arr, low, high):
    if len(arr) == 1:
        return arr
    if low < high:
 
       
        pi = partition(arr, low, high)
 
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
        
        
n=int(input("Enter the number of elements in Array: "))
arr=[]

for i in range(0,n):
    ele=int(input())
    arr.append(ele)
    
quickSort(arr,0,len(arr)-1)

for i in range(0,n):
    
    print(arr[i])
```
