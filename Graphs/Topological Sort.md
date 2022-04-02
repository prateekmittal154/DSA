
# TOPOLOGICAL SORTING IN DESIGN AND ANALYSIS OF ALGORITHMS 

Let G be a DAG 

Linear ordering of all the vertices such that if G contains an edge (u,v) then u appears before v in the ordering


## KAHN'S ALGORITHM

``` 

L <-- Empty Queue that will contain the sorted elements
S <-- Set of all nodes consisting of all nodes with no incoming edges

While S is non empty do:
  remove a node n from S;
  add n to tail of L;
  
  for each node m with edge e from n to m :
     remove edge e from the graph
     if m has no other incoming edges:
        add m to S
        
if graph has edges:
  return error // "Graph has atleast one cycle
  
else 
  return L
```

-------------------------------------------------------------------------------------------------------------------------------------------------------

Kahn's Algorithm Time complexity - O(V+E)

------------------------------------------------------------------------------------------------------------------------------------------------------

