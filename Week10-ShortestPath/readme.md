For 20C Dijkstra

We just need to implement the algorithm and store the previous (or source) vertex because we need that for the answer output. Instead of using pair, we need an additional space to store the source vertex (that explains why the usage of tuple is necessary in order to tackle this problem). After we execute Dijkstra algorithm we just have to "trace-back" the process using stack and pop them all up. This will return the path we've gone through to get the minimum distance.
