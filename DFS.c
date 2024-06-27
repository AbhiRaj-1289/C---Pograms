#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define MAX 100

/*int adj[MAX][MAX];
int visited[MAX];
int n;

void DFS(int v) {
    int i;
    printf("%d ", v);
    visited[v] = 1;
    for (i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int i, j, edges, v1, v2, startVertex;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for (i = 0; i < edges; i++) {
        printf("Enter edge (v1 v2): ");
        scanf("%d %d", &v1, &v2);
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;
    }

    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Enter start vertex: ");
    scanf("%d", &startVertex);

    printf("DFS starting from vertex %d: ", startVertex);
    DFS(startVertex);
    printf("\n");

    return 0;
}*/

//Structure for node in the adjacency list
struct Node
{
    int data;
    struct Node* next;
};

//Structure for the adjacency list
struct List{
    struct Node* head;  
};

//Structure for the graph
struct Graph
{
    int vertices;
    struct List* array;
};

//Function to create a new node
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//Function to create a graph with a given number of vertices
struct Graph* createGraph(int vertices) 
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;
    graph->array = (struct List*)malloc(vertices * sizeof(struct List));
    for (int i = 0; i < vertices; i++)
    {
        graph->array[i].head = NULL;
    }
    return graph;
}

//Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest)
{
    struct Node* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
}

//Function to perform Depth First Search from a given vertex
void DFS(struct Graph* graph, int vertex, bool visited[])
{
    visited[vertex] = true;
    printf("%d ", vertex);
    struct Node* currentNode = graph->array[vertex].head;
    while (currentNode)
    {
        int adjacentVertex = currentNode->data;
        if (!visited[adjacentVertex])
        {
            DFS(graph, adjacentVertex, visited);
        }
        currentNode = currentNode->next;
    }
}

//Function to perform DFS traversal fromm agiven vertex in a specified order
void DFSTraversal(struct Graph* graph, int* order, int orderSize)
{
    bool* visited = (bool*)malloc(graph->vertices*sizeof(bool));
    for (int i = 0; i < graph->vertices; i++)
    {
        visited[i] = false;
    }
    for(int i = 0; i < orderSize; i++)
    {
        if(!visited[order[i]])
        {
            DFS(graph, order[i], visited);
        }
    }
    free(visited);
}

//Main function
int main()
{
    //Create a graph with 5 vertices
    int vertices = 4;
    struct Graph* graph = createGraph(vertices);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 3, 3);
    addEdge(graph, 1, 3);

    int order[] = {2,0,1,3};
    int orderSize = sizeof(order)/sizeof(order[0]);
    printf("Following is the Depth First Traversal(Starting from vertex 0)\n");
    DFSTraversal(graph, order, orderSize);
    return 0;
}