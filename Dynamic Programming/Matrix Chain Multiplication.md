# MATRIX CHAIN MULTIPLICATION- DYNAMIC PROGRAMMING

----------------------------

## PROBLEM STATEMENT

We Want to multiply n number of matrices- A1 X A2 X A3..... An and minimize the total number of multiplications performed.

Therefore, Given n number of matrices {A1, A2, A3.... An} And their corresponding dimensions, We want to find the minimum number of multiplications
needed and find the correct order of parenthesisation as well.

-----------------------------

The Cost for the multiplication of any two matrices is given by the following formula

The cost of multiplication is defined as the total number of multiplications needed


![CodeCogsEqn](https://user-images.githubusercontent.com/80255503/161420309-5064c59d-c55c-4976-8711-6f56c045c7e1.png)


--------------------------------

### EXAMPLE TO APPLY THE ABOVE FORMULA


For Example let us take 4 Matrices {A1, A2, A3, A4} with the dimension set as {3 X 2 , 2 X 4 , 4 X 2, 2 X 5 } 

Therefore, let us define the 4 dimension set {d0, d1, d2, d3, d4} as {3,2,4,2,5}

#### C TABLE (COST TABLE) - This will maintain a tabulation of Cost(i,j)

| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   |     |     |     |
|  2|     | 0   |     |     |
|  3|     |     | 0   |     |
|  4|     |     |     |  0  |


+ We have filled 0 for the C[i,j] pairs as the cost of multiplication of a matrix in this case would be 0
+ Now at each step we will calculate the costs and the corresponding k values to arrive at the final minimum cost and the feasible paranthesisation
+ We will follow a bottom up approach and hence start with the smallest case



#### K TABLE - This will contain that value of k for which the corresponding minimum value of C[i,j] will be obtained

|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |     |     |     |
|  2|     |     |     |     |
|  3|     |     |     |     |
|  4|     |     |     |     |

------------------------------------------------------------------------

#### STEP 1

![CodeCogsEqn (2)](https://user-images.githubusercontent.com/80255503/161421267-f7321339-5903-42ef-a344-7514df7b762f.png)

| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |     |     |
|  2|     | 0   |     |     |
|  3|     |     | 0   |     |
|  4|     |     |     |  0  |


|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |     |     |
|  2|     |     |     |     |
|  3|     |     |     |     |
|  4|     |     |     |     |

--------------------------------------------------------------------

### STEP 2

![CodeCogsEqn (3)](https://user-images.githubusercontent.com/80255503/161421457-80df9580-6518-45ae-9324-7139fca6b83f.png)

| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |     |     |
|  2|     | 0   |  16 |     |
|  3|     |     | 0   |     |
|  4|     |     |     |  0  |


|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |     |     |
|  2|     |     |  2  |     |
|  3|     |     |     |     |
|  4|     |     |     |     |

---------------------------------------------------------------------

### STEP 3


![CodeCogsEqn (4)](https://user-images.githubusercontent.com/80255503/161423844-8a98ae18-b4fd-45ca-8ceb-63f970f4a1c5.png)

| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |  28 |     |
|  2|     | 0   |  16 |     |
|  3|     |     | 0   |     |
|  4|     |     |     |  0  |

|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |  1  |     |
|  2|     |     |  2  |     |
|  3|     |     |     |     |
|  4|     |     |     |     |

---------------------------------------------------------------------------

### STEP 4 


![CodeCogsEqn (7)](https://user-images.githubusercontent.com/80255503/161424637-04847c03-ef79-48d5-aec6-9bc7ea3c64d7.png)



| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |  28 |     |
|  2|     | 0   |  16 |     |
|  3|     |     | 0   |   40|
|  4|     |     |     |  0  |

|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |  1  |     |
|  2|     |     |  2  |     |
|  3|     |     |     |   3 |
|  4|     |     |     |     |


----------------------------------------------------------------------------

### STEP 5

![CodeCogsEqn (5)](https://user-images.githubusercontent.com/80255503/161424327-c3020325-e1ec-4019-8358-463eba67ba2e.png)

| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |  28 |     |
|  2|     | 0   |  16 |   36|
|  3|     |     | 0   |   40|
|  4|     |     |     |  0  |

|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |  1  |     |
|  2|     |     |  2  |   3 |
|  3|     |     |     |   3 |
|  4|     |     |     |     |

---------------------------------------------------------------------------

### STEP 6 


![CodeCogsEqn (6)](https://user-images.githubusercontent.com/80255503/161424548-a0d89f9f-4b45-48ed-a604-09dc677ffd3b.png)



| C |1    | 2   | 3   | 4   | 
|---|:---:|:---:|:---:|:---:|
|  1| 0   | 24  |  28 |   58|
|  2|     | 0   |  16 |   36|
|  3|     |     | 0   |   40|
|  4|     |     |     |  0  |

|  K|1    | 2   | 3   | 4  | 
|---|:---:|:---:|:---:|:---:|
|  1|     |   1 |  1  |   3 |
|  2|     |     |  2  |   3 |
|  3|     |     |     |   3 |
|  4|     |     |     |     |

----------------------------------------------------------------------------

Therefore the minimum number of multiplications would be : 58 { c[1,4] }

And the ideal paranthesisation would be: 

1. (A1 A2 A3) A4 // The value of k is 4 for (1,4)
2. ((A1)(A2 A3)) A4 // The value of k is 1 for (1,3)

Thus we have obtained an ideal paranthesisation as well as the minimum number of multiplications needed in this process

---------------------------------------------------------------------------
