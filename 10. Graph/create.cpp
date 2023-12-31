#include <stdio.h>
#define N 100
int Graph[N][N];
int vertices, edges;
int u, v;
int i, j;

void InputGraph()
{
    printf("Enter vertices and Edges:\n");
    scanf("%d%d", &vertices, &edges);
    vertices += 1;
    // Reset graph
    for (i = 0; i <= vertices; ++i)
        for (j = 0; j <= vertices; ++j)
            Graph[i][j] = 0;

    // Input Graph
    printf("Enter (u v):\n");
    for (i = 0; i < edges; ++i)
    {
        scanf("%d%d", &u, &v);
        // Here value of 1 represents there is an edge (u,v)
        Graph[u][v] = Graph[v][u] = 1;
    }
}

void PrintGraph()
{
    // Print the current Graph
    printf("\n");
    printf("Graph:\n");
    for (i = 0; i < vertices; ++i)
    {
        for (j = 0; j < vertices; ++j)
            printf("%d ", Graph[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{

    printf("Undirected Unweighted Graph:\n");
    printf("============================\n\n");

    InputGraph();
    PrintGraph();
    return 0;
}