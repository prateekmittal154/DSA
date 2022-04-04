# LONGEST COMMON SEQUENCE - DYNAMIC PROGRAMMING

-------------------------

## PROBLEM STATEMENT:

We are given any two strings S1 and S2. We need to find the Longest subsequence which is common to both (does not need to be consecutive) and output the length of such subsequence and the subsequence as well

-----------------------

## APPROACH

We follow a bottom up approach and use the following logic:

''' C++

if(A[i]== B[j]){

LCS(A[i-1], B[j-1])

else

LCS[i,j] = MAX(LCS[(i-1),j], LCS[i, j-1])

}

'''

We will Construct a table side by side to store the result obtained at each step

------------------------------

## EXAMPLE

1. stone
2. longest
        
        
               l      o     n     g     e      s    t  

  |      |0    |1    |2    |3    |4    |5    |6    |7    |
  |:---: |:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
  |0     |  0  | 0   |  0  |  0  |  0  |  0  |  0  |  0  |
s |1     |  0  | 0   |  0  | 0   | 0   | 0   | 1   | 1   |
t |2     |  0  | 0   | 0   |  0  |  0  |  0  |  1  | 2   |
o |3     |  0  |  0  | 1   | 1   |  1  |  1  |  1  |  2  |
n |4     |  0  |  0  | 1   | 2   |  2  |  2  |  2  |  2  |
e |5     |  0  | 0   |  1  | 2   |  2  | 3   |  3  |  3  |

now we can identify the subsequence by backtracking from the final value in the table -->   'one'

------------------------------------------------
