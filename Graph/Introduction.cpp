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

(ii)Adjacency List->In this we have an array of lists where lists are most popularly represented as :
                    (a)Dynamics Sized Arrays
                    (b)Linked lists


              Undirected graph V+2E
            /
Space O(V+E)
            \
              Directed graph V+E

    Operations :
    Check if there is an edge from u to v:O(v)
    Find all adjacent of u : O(degree (u))
    Find degree of u : O(1)
    Add an edge : O(1)
    Remove an edge : O(v)

                1
               /|
              / |
             0  |  3
              \ | /
                2

                    _     _
                0) |1|---|2|
                    _     _
                1) |0|---|2|
                    _     _     _
                2) |0|---|1|---|3|
                    _
                3) |2|



Implementation :
// Code for the implementation of the logic for making and printing the adjacency list
void printGraph(vector<int>,adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            cout<<x<<" ";
            cout<<"\n";
        }
    }
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v=4;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    printGraph(adj,v);
    return 0;
}

*/