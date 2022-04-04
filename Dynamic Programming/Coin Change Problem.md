# COIN CHANGE PROBLEM - DYNAMIC PROGRAMMING

---------------------------

## PROBLEM STATEMENT:

1. You are given an array of coins with varying denominations 
2. You are given an integer sum representing the total amount of money
3. you must return the fewest coins required to make up that sum; 
4. If that sum cannot be constructed, return -1

--------------------

## Pseudocode of Coin Change Problem



1. Initialize a new array for dynamicprog of length n+1, where n is the number of different coin changes you want to find.
2. Because there is only one way to give change for 0 , set dynamicprog[0] to 1.
3. Iterate through the array for each coin change available and add the value of dynamicprog[index-coins[i]] to dynamicprog[index] for indexes ranging from '1' to 'n'.
4. dynamicprog[n] return value


-----------------------

## EXAMPLE 

1. coins[] = {1, 2, 3}
2. sum = 4


![image](https://user-images.githubusercontent.com/80255503/161480635-8a301b11-e9eb-4ca9-aa6c-56c353a887b0.png)
