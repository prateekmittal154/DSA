# SOME BASIC TERMINOLOGIES AND EULER GRAPHS

-------------------------------------------------------------------------------

## TERMINOLOGIES ASSOCIATED WITH GRAPHS


### WALK 

+ Visit vertices and their connecting edges
+ can end on the same vertex as the beginning vertex or a different vertex 
+ can travel over any edge or any vertex any number of times 

### PATH

+ A walk that does not include any vertex twice
+ EXCEPT-- The first and the last vertex may be the same 

### TRAIL

+ Do not visit any edge twice
+ May visit a vertex twice but only in those cases where any edge is not visited again

### CYCLE

Path that begins and ends on the same vertex

### CIRCUIT

Trail that begins and ends on the same vertex

-----------------------------------------------------------------------------

## EULER GRAPHS


1. An **Eulerian Path** is a Trail in which all the edges of the graph are included exactly once
2. An **Eulerian Circuit** is a trail that ends and and starts at the same vertex and includes all the edges atleast once.
4. A Graph containing an Euler Circuit is called a **Euler Graph**
5. A connected Graph has an Eulerian Path iff it contains two vertices with Odd Degree (Semi Eulerian)
6. **A connected Graph is an Eulerian Graph if no vertex has an Odd Degree**

---------------------------------------------------------------------------

## ALGORITHMS TO IDENTIFY A EULER GRAPH & THE PATH TO BE FOLLOWED 

#### FLEURY'S ALGORITHM 

1. Start at a vertex of Odd Degree. Or if the Graph has none, start at an arbitrarily chosen vertex
2. Choose the next vertex in the path to be the one whose deletion would not disconnect the graph ( Always choose a non bridge over a bridge )
3. Add that edge to the circuit, and delete it from the graph
4. Continue Until the circuit is Complete

---------------------------------------------------------------------------

#### HIERHOLZER'S ALGORITHM

1. Choose any starting vertex v, and cover a trail of edges from that vertex leading back to v. The tour/ circuit formed in this way is a closed tour and may or may not contain all the edges or vertices of the original graph given.
2. As long as there exists a vertex u that currently belongs to this obtained tour such that it has adjacent tours which are not a part of the current tour, add those tours to the current path at appropriate place.

-----------------------------------------------------------------------------


