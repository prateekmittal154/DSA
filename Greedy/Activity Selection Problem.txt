<h1> <center> ACTIVITY SELECTION PROBLEM </center> </h1>

-------------------------------------------------------------------------------------------------------------------------------------------------

*Problem Statement*

1. We are given a number of computing activities
2. All these activities require some coomon resource
3. We have to find the maximum size set of the compatible activities

-------------------------------------------------------------------------------------------------------------------------------------------------

Given :

1. A list of activities { a1, a2, a3, a4 ..... an}
2. ai has a start time si and finish time fi where 0<si,fi<inf
3. si and sj are compatible if [si,fi) and [sj,fj) do not overlap

=> You are to find the maximum size subset of the compatible activities out of the given set of n activities


Assumption: 

All the activities are sorted based on the increasing order of their finish times


--------------------------------------------------------------------------------------------------------------------------------------------------

Example of the problem

_____________________________________________________
|i  | 1    2   3   4   5   6   7   8 ` 9   10    11  |
|___|________________________________________________|
|si | 1    3   0   5   3   5   6   8   8   2     12  |
|___|________________________________________________|
|fi | 4    5   6   7   9   9   10  11  12  14    16  |
|___|________________________________________________|


---------------------------------------------------------------------------------------------------------------------------------------------------

INTUITION:

Firstly, We need to find the compatible activities

In this case the activities compatible to each other can be found by comparing the start time and finish time.

if the si> fj then i and j are compatible to each other

Then find the maximum number of compatible activities using a SINGLE INSTANCE OF RESOURCE

-------------------------------------------------------------------------------------------------------------------------------------------------


ALGORITHM - GREEDY ACTIVITY SELECTOR (s,f):

n= s.length
A= {a1}
k=1 // It is the pointer to last selected activity
for m = 2 to n
   if s[m] >= f[k] // checking for compatibility
   A= A U {am}
   k=m // updating activity
   
return A

--------------------------------------------------------------------------------------------------------------------------------------------------

DRY RUNNING THIS ALGORITHM ON THE GIVEN EXAMPLE SET:

_____________________________________________________
|i  | 1    2   3   4   5   6   7   8 ` 9   10    11  |
|___|________________________________________________|
|si | 1    3   0   5   3   5   6   8   8   2     12  |
|___|________________________________________________|
|fi | 4    5   6   7   9   9   10  11  12  14    16  |
|___|________________________________________________|

n = 11
A= {a1}
k=1 

m=1 : s[1] >= f[1] ? False 
m=2 : s[2] >= f[1] ? False
m=3 : s[3] >= f[1] ? False
m=4 : s[4] >= f[1] ? True => A= {a1,a4} and k=2
m=5 : s[5] >= f[4] ? False
m=6 : s[6] >= f[4] ? False
m=7 : s[7] >= f[4] ? False
m=8 : s[8] >= f[4] ? True => A={a1,a4,a8} and k=8
m=9 : s[9] >= f[8] ? False
m=10: s[10] >= f[8] ? False
m=11: s[11] >= f[8] ? True => A= {a1, a4, a8, a11} and k=11
m=12 : LOOP TERMINATED

The final set to be returned will be => A= {a1, a4, a8, a11} 
Therefore in this case the largest set of compatible values would be '4'

---------------------------------------------------------------------------------------------------------------------------------------------------

ANALYSIS OF THIS ALGORITHM:

Time Complexity : O(n)

---------------------------------------------------------------------------------------------------------------------------------------------------

