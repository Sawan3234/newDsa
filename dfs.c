#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the adjacency list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge to the graph
void addEdge(struct Node* adjList[], int u, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;
}

// Depth First Search (DFS) traversal
void dfsUtil(struct Node* adjList[], int vertex, int visited[]) {
    // Mark the current vertex as visited
    visited[vertex] = 1;
    printf("%d ", vertex);

    // Traverse all adjacent vertices of the current vertex
    struct Node* temp = adjList[vertex];
    while (temp != NULL) {
        int neighbor = temp->data;
        if (!visited[neighbor]) {
            dfsUtil(adjList, neighbor, visited);
        }
        temp = temp->next;
    }
}

// DFS traversal starting from a specific vertex
void dfs(struct Node* adjList[], int vertices, int startVertex) {
    // Array to keep track of visited vertices
    int visited[vertices];
    for (int i = 0; i < vertices; ++i) {
        visited[i] = 0;
    }

    // Perform DFS traversal
    printf("Depth First Traversal starting from vertex %d: ", startVertex);
    dfsUtil(adjList, startVertex, visited);
}

int main() {
    // Number of vertices in the graph
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Adjacency list representation of the graph
    struct Node* adjList[vertices];
    for (int i = 0; i < vertices; ++i) {
        adjList[i] = NULL;
    }

    // Add edges to the graph
    int edges;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter the edges (in the format 'u v'):\n");
    for (int i = 0; i < edges; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(adjList, u, v);
    }

    // Choose the starting vertex for DFS
    int startVertex;
    printf("Enter the starting vertex for DFS: ");
    scanf("%d", &startVertex);

    // Perform DFS traversal starting from the chosen vertex
    dfs(adjList, vertices, startVertex);

    return 0;
}
