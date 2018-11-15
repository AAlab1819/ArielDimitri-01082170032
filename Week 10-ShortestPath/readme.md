

For 20C Dijkstra

We just need to implement the algorithm and store the previous (or source) vertex because we need that for the answer output. 
Instead of using pair, we need an additional space to store the source vertex (that explains why the usage of tuple is necessary
in order to tackle this problem). After we execute Dijkstra algorithm we just have to "trace-back" the process using stack and pop them
all up. This will return the path we've gone through to get the minimum distance. The solution to this problem can be done using 
dijkstra with priority queue. Starting from 1, we make a priority queue of all its edges storing their accumulated weight and vertex. 
It will then move on to the next highest priority, which is the edge with least weight, and then update the priority queue with its 
edges. This will go on until we reach the node n, after which we will then print back the vertexes of the shortest path to n.

Time Complexity: O(nLogm)


FOR 601A

The solution to this problem can be done using BFS Algorithm. 
In this solution, we will first traverse the path followed by the train and calculate its minimum time taken. 
This is done by making a queue of all the possible paths taken by the train and traversing it by its breadth, marking each of the town
it has already passed, and the accumulated time to reach it. If at any point the queue reaches town n, then we will have the shortest
time taken by the train. On the other hand, if by the end of the queue we have not reach town n, then it is not possible for the train 
to reach town n. Then we repeat the same process for the bus, and finally comparing which of its time taken is shortest or if there is 
no way to reach town n.

Time Complexity: O(n+m)


