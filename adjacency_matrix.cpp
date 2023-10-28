#include <stdio.h>

#define MAX_NODES 100

int adjacencyMatrix[MAX_NODES][MAX_NODES];

void initializeMatrix(int numNodes) {
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            adjacencyMatrix[i][j] = 0; 
        }
    }
}


void addEdge(int startNode, int endNode) {
    adjacencyMatrix[startNode][endNode] = 1;
   
}


void displayMatrix(int numNodes) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numNodes, numEdges;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    initializeMatrix(numNodes);

    printf("Enter the edges (startNode endNode):\n");
    for (int i = 0; i < numEdges; i++) {
        int startNode, endNode;
        scanf("%d %d", &startNode, &endNode);
        addEdge(startNode, endNode);
    }

    displayMatrix(numNodes);

    return 0;
}

