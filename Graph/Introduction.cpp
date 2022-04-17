/*
There are two types of the graph
(i)Directed
            v1--------v3
            |          | \
            |          |  \
            |          |   v5
            |          |  /
            |          | /
            v2--------v4


(ii)Undirected




// Walk->Travelling through the nodes in which repeatation is allowed
         For a walk there should be an edge available for it;
         v1,v2,v4 is a walk but v1,v5 is not a walk as there is not an edge in the walk.

// Path->Path is a special walk in which no repeatation is allowed.

----  In some books a walk is termed as a path and a path is termed a simple path.  ----

// A graph is called cyclic when a walk starts and ends on the same vertix.
// Weighted graph is a graph in which every edge is assigned some weight which is generally given according to the lenght of the edge.




//Representation of the graphs
(i)Adjacency Matrix->for undirected graph it forms a symmetric matrix
    // Operations on the graph
    Space Required: Q(v*v)
    Operations :
        Check if u and v are adjacent: Q(1);
        Find all vertices adjacent to u: Q(v);
        Find degree of u: Q(v);
        Add /Remove an edge : Q(1);
        Add/Remove a vertex : Q(v2);
    Problems :
    It is storing the retendent information i.e It is storing the information of the edges which is
    present but also it is storing the information of the edges which is not present also.




*/