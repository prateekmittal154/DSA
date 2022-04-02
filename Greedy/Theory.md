# Greedy Method:

Used to solve 'Optimisation result Problems'

---------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                'BASIC TERMS & DEFINITIONS'
                                                                


Suppose that we want to go from a location to A to B and there are multiple paths to go from A to B. Let these multiple paths be represented as S1, S2, S3, S4......


Constraint: A condition. Eg- We want to go from A to B in 12 hours. Then this is a kind of constraint

Feasible Soln: A soln that satisfies the constraint is a Feasible Solution. There can be multiple feasible solutions to a problem.

Next Constraint might be of the type ---> I need to minimize the cost

---------------------------------------------------------------------------------------------------------------------------------------------------------

Such Problems where the main task is to obtain a minimum or maximum solutions are called as <b> Optimisation Problems </b>

such solutions which are feasible as well as optimised are called - 'Optimal Solutions'

For a problem there can be many solutions, many feasible solutions but only one optimal solution

---------------------------------------------------------------------------------------------------------------------------------------------------------

For any optimisation  Problem, we follow three kind of techniques:

1. Greedy Method
2. Dynamic Programming
3. Branch and Bound






-----------------------------------------------------------------'GREEDY APPROACH'-----------------------------------------------------------------------

* We select the locally optimum choice at each step of the problem
* We may/may not have a Greedy Approach for all problems
* The solution using Greedy may or may not be optimal solution
 
 Eg - Minimization problems using Prim's, Kruskal's and Dijikstra follow Greedy approach , Huffman Coding Problem is also Greedy approach
 
 We have to discuss
 
 1. Job sequencing
 2. Activity Selection Problem
 3. Fractional Knapsack Problem

--------------------------------------------------------------------------------------------------------------------------------------------------------

                                                 *Two Key Ingredients of a Greedy Problem*


1) Greedy choice Property:

 If I am able to get a optimal solution using Greedy approach without considering the results of the other sub-problems
 
2) Optimal sub-structures

An optimal solution to the original problem should be obtained by combining the optimal solution to each sub-problem

-------------------------------------------------------------------------------------------------------------------------------------------------------



 
                            
