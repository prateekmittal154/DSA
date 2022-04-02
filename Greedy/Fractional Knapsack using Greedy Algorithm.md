
<b> FRACTIONAL KNAPSACK PROBLEM USING GREEDY APPROACH </b>

------------------------------------------------------------------------------------------------------------------------------------------------------


## GIVEN: 

1.  n objects are there 
2.  Each Object has a weight Wi > 0 
3.  Each Object has a profit Pi > 0
4.  There is a Knapsack with the total capcity 'K'

-----------------------------------------------------------------------------------------------------------------------------------------------------

## GOAL:

1. Fill The Knapsack with a subset of the given objects so as to maximise the profit
2. Let Xi represent the chosen fraction of the ith object


   Maximise - SUM( Pi* Xi) 
   Such that - SUM ( Wi* Xi) <= k
   Where 0< Xi <1 
   
  
----------------------------------------------------------------------------------------------------------------------------------------------------

EXAMPLE PROBLEM :


|  i     |   Profit   | Weight | Profit/ Weight|
|--------|:----------:|:------:|:-------------:|
| 1      |   1        |  1     |       1       |
| 2      |   6        |  2     |       3       |
| 3      |   18       |  3     |       6       |
| 4      |   22       |  6     |       3.66    |
| 5      |   28       |  7     |        4      |

Therefore, to get the maximum profit we try to maximize the Profit/Weight ratio

---------------------------------------------------------------------------------------------------------------------------------------------------

## ALGORITHM (PSEUDO -CODE)


![image](https://user-images.githubusercontent.com/80255503/161378125-cd0e867b-9fa5-4e3f-984e-2a673f182b52.png)

----------------------------------------------------------------------------------------------------------------------------------------------------


