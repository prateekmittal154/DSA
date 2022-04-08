# MERGE SORT- DIVIDE AND CONQUER

* Divide The given Array into two halves
* Keep Carrying on the division until atomic units are left behind
* Now, Merge the atomic elements in sorted manner


![image](https://user-images.githubusercontent.com/80255503/162456850-29abd3df-7a3b-476e-8f53-66f2122240b3.png)


The recuurence relation would be:



T(n) = 2T(n/2) + O(n)



The solution of the above recurrence is **O(nLogn)**


``` Python
def merge_sort(inp_arr):
    size = len(inp_arr)
    if size > 1:
        middle = size // 2
        left_arr = inp_arr[:middle]
        right_arr = inp_arr[middle:]
 
        merge_sort(left_arr)
        merge_sort(right_arr)
 
        p = 0
        q = 0
        r = 0
 
        left_size = len(left_arr)
        right_size = len(right_arr)
        while p < left_size and q < right_size:
            if left_arr[p] < right_arr[q]:
              inp_arr[r] = left_arr[p]
              p += 1
            else:
                inp_arr[r] = right_arr[q]
                q += 1
             
            r += 1
 
        
        while p < left_size:
            inp_arr[r] = left_arr[p]
            p += 1
            r += 1
 
        while q < right_size:
            inp_arr[r]=right_arr[q]
            q += 1
            r += 1
 
n=int(input("Enter the number of elements in Array: "))
arr=[]

for i in range(0,n):
    ele=int(input())
    arr.append(ele)
    
merge_sort(arr)

for i in range(0,n):
    
    print(arr[i])
```
