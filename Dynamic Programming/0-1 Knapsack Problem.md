# O/1 KNAPSACK PROBLEM - DYNAMIC PROGRAMMING APPROACH

--------------------------------

### Input:

1. Maximum weight M and the number of packages n.
2. Array of weight W[i] and corresponding value V[i].

### Output:

1. Maximize value and corresponding weight in capacity.
2. Which packages the thief will take away.

##### THE 0/1 KNAPSACK CONSTRAINT -

In this Knapsack algorithm type, each package can be taken or not taken. Besides, the thief cannot take a fractional amount of a taken package or take a package more than once. 

---------------------------------

INTUITION BEHIND THE 0/1 KNAPSACK PROBLEM

The value of the knapsack algorithm depends on two factors:

1. How many packages are being considered
2. The remaining weight which the knapsack can store.

Therefore there will be two variable quantities

-------------------------------------

Let us define B[i,j] such that it gives the maximum possible value in {1,2 .... i} and weight limit j

for Example B[4] [10]=8  would mean that in the optimal case , the total weight of selected packages is 8 when there are first 4 packages to choose from and the maximum weight is 10. It is not necessary that all the 4 items are selected

```
B[i][j] = max(B[i – 1][j], V[i]+B[i – 1][j – W[i]]
```

-----------------------------------------

Based on these values of B, we build up a table to store the values of ```B[i][j]``` and finally arrive at the value of ``` B[n][M]```


-----------------------------------------
EXAMPLE CASE 

Let us say that we have 4 objects and the maximum capcity of the bag is 8

Also, P={1,2,5,6} and W={2,3,4,5}

|P    |  W  |                 
|:---:|:---:|                                
|1    |2    |                
|2    |3    |                
|5    |4    |                 
|6    |5    |                
                              
                             
|     |0    |1    |2    |3    |4    |5    |6    |7    |8    |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|0    |0    |0    |0    |0    |0    |0    |0    |0    |0    |
|1    |0    |0    |1    |1    |1    |1    |1    |1    |1    |
|2    |0    |0    |1    |2    |2    |3    |3    |3    |3    |
|3    |0    |0    |1    |2    |5    |5    |6    |7    |7    |
|4    |0    |0    |1    |2    |5    |6    |6    |7    |8    |


Now we need to find {x1,x2,x3,x4}, that is whether each object should be included or not

Now we have the maximum profit 8 in this case

+ This 8 is not present in the row above the 4th object row, this means that this 8 is due to object 4 and therefore should be included. Therefore the sequence becomes {x1,x2,x3,1}
+ Next we check the remaining profit which turns out to be 8-6=2
+ We check if 2 is present in 3rd row . It is present
+ Now we check whether 2 is present in 2nd row. It is present.
+ From above it can be inferred that this 2 is not present due the 3rd object but due to the second object as 2 is not present before that. Therefore the 3rd object is excluded and at the same time, 2nd object must be included
+ Therefore the output sequence becomes {x1,1,0,1}
+ Now the remaining profit=0
+ We check if 0 is present in the 1st row. It is present
+ We check if 0 is present in the 1st row. It is present
+ Therefore this 0 is not due to the 1st object and hence it must be excluded
+ Therefore the final sequence becomes - {0 1 0 1}

-----------------------------------------
