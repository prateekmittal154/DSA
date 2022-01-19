#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 00:20:26 2022

@author: prateek
"""
def binary_search(arr, low, high, x):
 
   
    if high >= low:
 
        mid = (high + low) // 2
 
      
        if arr[mid] == x:
            return mid
 
        
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)
 
        else:
            return binary_search(arr, mid + 1, high, x)
 
    else:
        
        return -1
 
lst=[]
n=int(input("Enter the number of elements in List: "))

for i in range(0,n):
    ele=int(input())
    lst.append(ele)
    
key=int(input("Enter the element to be Searched: " ))

result = binary_search(lst, 0, len(lst)-1, key)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")    