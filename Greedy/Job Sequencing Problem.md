<b><center><h1> JOB SEQUENCING PROBLEM (GREEDY APPROACH) </h1></center></b>

-------------------------------------------------------------------------------------------------------------------------------------------------------

*PROBLEM STATEMENT:*

1. We are provided with 'n' jobs which are to be completed on a resource ( SINGLE INSTANCE)
2. Each Job i, has a deadline di>=1 and an associated profit pi>=0
3. Each Job gets completed in one unit of time
4. For each job, the profit pi is earned if and only if the job is completed before the deadline di
5. The objective of the job is to find the subset of jobs and their associated sequence such that the profit is maximised

----------------------------------------------------------------------------------------------------------------------------------------------------

EXAMPLE: 

![image](https://user-images.githubusercontent.com/80255503/161373277-07e50337-3ca0-4ca9-9c4b-fe2023bf483e.png)


EXPLANATION:

From the example it can be observed that we can complete at most 2 jobs out of the given two jobs. ( Each job takes 1 day and the maximum deadline is 2)

{J1, J2} cannot be an answer but {J2, J1} can be ---> Profit = 110

{J4, J1} can be a solution with a profit of 127

{J1} with a pofit of 100 can also be executed 

_The designed algorithm should give us the maximum profit value_

----------------------------------------------------------------------------------------------------------------------------------------------------

<b> <center> ALGORITHM FOR JOB SEQUENCING : </center> </b>

1. Sort the jobs in the decreasing order of their profit values
2. Place each job at latest time that meets its deadline

Number of slots = MIN( n , MAX(di))

Where, 

1. n => Total Number of Jobs
2. di => Deadline of the ith Job

---------------------------------------------------------------------------------------------------------------------------------------------------
PSEUDO CODE: 

![image](https://user-images.githubusercontent.com/80255503/161375901-2b058078-eea6-4f42-883b-532ff7f43589.png)

--------------------------------------------------------------------------------------------------------------------------------------------------

Worst Case Time Complexity -- O(n^2)

--------------------------------------------------------------------------------------------------------------------------------------------------

To Be Updated -- DISJOINT SETS AND JOB SEQUENCING USING GREEDY



 
 








