#include <stdio.h>

#define MAX_VERTICES 100

// Function to display the adjacency matrix
void displayGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices)
{
int i,j;
    printf("Adjacency Matrix:\n");
    for (i = 0; i < vertices; i++) {
	for (j = 0; j < vertices; j++) {
	    printf("%d ", graph[i][j]);
	}
	printf("\n");
    }
}

// Function to add an edge to the graph
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int start, int end)
{
    graph[start][end] = 1;
    // graph[end][start] = 1; // For undirected graph
}

int main() {
    int vertices, edges,i;

    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; // Initialize the adjacency matrix with zeros

    //clrscr();
    // Input the number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
	printf("Invalid number of vertices. Exiting...\n");
	return 1;
    }



    // Input the number of edges
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    if (edges < 0 || edges > vertices * (vertices - 1) / 2) {
	printf("Invalid number of edges. Exiting...\n");
	return 1;
    }

    // Input edges and construct the adjacency matrix
    for (i = 0; i < edges; i++) {
	int start, end;
	printf("Enter edge %d (start end): ", i + 1);
	scanf("%d %d", &start, &end);


	addEdge(graph, start, end);
    }

    // Display the adjacency matrix
    displayGraph(graph, vertices);
 //   getch();

    return 0;
}