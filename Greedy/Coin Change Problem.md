# COIN CHANGE PROBLEM
----------------------------------------

## PROBLEM STATEMENT:

1. Given a value V we want to make a change for V Rs

2. We have an infinite supply of each of the denominations in Indian currency

3. what is the minimum number of coins and/or notes needed to make the change?

----------------------------------------

## INTUITION:

1. Keep Adding the larger denominations of coins/ Notes at first to reduce the number of coins needed
2. Repeat this till the left value is Zero

----------------------------------------

## ALGORITHM:

1. Sort the Array of the given denominations in decreasing order
2. Find the first denomination smaller than the current V
3. Add Found denomination to the result
4. Subtract this denomination from V
5. Repeat the Steps 3 and 4 until V=0
6. Print result

-----------------------------------------

## ANALYSIS:

1. Time complexity - O(V)
2. Space Complexity - O(V)

3. The Greedy Approach does not always give the best output for these kind of problems. For example if denominations = {9,6,5,1} and value=11, the generated output is 9,1,1 but the optimal output is {6,5}

4. The Optimal solution for this case will be provided by Dynammic Programming Approach
----------------------------------------

