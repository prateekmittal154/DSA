# BINARY SEARCH

---------------------------------------------------------------------------------------------------------------------

### PROBLEM STATEMENT:

We want to search for a particular element in the given sorted array/list 

---------------------------------------------------------------------------------------------------------------------

### ALGORITHM/ PSEUDO- CODE FOR BINARY SEARCH

```C++
BinarySearch(arr,n,start,end,key){

s= start
e= end
mid = s + (e-s)/2

if(arr[mid]== key){

return mid;
}

else if (arr[mid] >key){

BinarySearch(arr,n,s,mid-1,key);
}

else{

BinarySearch(arr,n,s+1,e,key);
}

}
```

----------------------------------------------------------------------------------------------------------------------

### TIME COMPLEXITY AND ASSOCIATED ANALYSIS


The Reccurence relation would be: T(n) = T(n/2) + c 

Therefore the time complexity would be: O(logn)

The iterative version of the same Algorithm have the same complexity and therefore it is better to use iterative version so as to avoid the extra
space used by the recursive version in maintaining the function call stack.


----------------------------------------------------------------------------------------------------------------------
