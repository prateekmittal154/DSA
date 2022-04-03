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
