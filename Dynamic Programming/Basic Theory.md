# DYNAMIC PROGRAMMING - BASIC THEORY INVOLVED

1. Used to solve Optimisation Problems
2. Instead of selecting the locally Optimum solution, we choose the globally optimum solution for each sub problem
3. Principle of Optimality -- A problem can be solved by taking a sequence of decisions




## TABULATION  (BOTTOM UP APPROACH)

1. starting from the bottom and accumulating answers to the top. 
2. If dp[0] is the base state and dp[n] our destination state. Then We need to find the value of destination state i.e dp[n]. 
3. If we start our transition from dp[0] and follow our state transition relation to reach our destination state dp[n], we call it the Bottom-Up approach.

## MEMOIZATION ( TOP-UP APPROACH)

If we need to find the value for some state say dp[n] and instead of starting from the base state that i.e dp[0] we ask our answer from the states that can reach the destination state dp[n] following the state transition relation, then it is the top-down fashion of DP. 

![image](https://user-images.githubusercontent.com/80255503/161417015-ff41b7cc-ff38-4f28-990d-530897237745.png)
