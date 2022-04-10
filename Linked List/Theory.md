# LINKED LIST DATA STRUCTURE


------------------------------------------

### REQUIREMENT - DYNAMIC SEQUENCE INTERFACE

Maintain a Sequence X1, X2, X3, X4 ...... Xn-1 subject to the following operations

+ build(x) : Make new Data Structure for items in X
+ len() : return n
+ iter_seq() : Output X0, X1, X2, ... Xn-1 in a sequential order
+ get_at(i) : return Xi (index i)
+ set_at(i,x) : set Xi to X
+ insert_at (i,x) : make x the new Xi. Shifting Xi ---> Xi+1 ---> Xi+2 ---> Xn-1 ---> Xn'-1
+ delete_at (i) : shift Xi <--- Xi+1 <------- <--- Xn'-1 <---- Xn-1
+ insert_last/first
+ delete_last/first


-------------------------------------------

### THE SOLUTION - LINKED LIST

It is the best option to implement this requirement


![image](https://user-images.githubusercontent.com/80255503/162627626-03cbd1b0-3b23-4259-b217-095bfef45fb2.png)



Insert/Delete First will be - O(1) time in this case



Get/set at needed i - O(i) time which means O(n) in the worst case


----------------------------------------

