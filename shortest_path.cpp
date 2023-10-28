#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 100


int minDistance(int distances[], int visited[], int numNodes) {
    int min = INT_MAX, minIndex = -1;
    for (int v = 0; v < numNodes; v++) {
        if (!visited[v] && distances[v] < min) {
            min = distances[v];
            minIndex = v;
        }
    }
    return minIndex;
}


void printShortestPath(int distances[], int parent[], int startNode, int numNodes) {
    printf("Shortest Path from Node %d:\n", startNode);
    for (int i = 0; i < numNodes; i++) {
        if (i == startNode)
            continue;
        printf("Node %d to Node %d: Distance = %d, Path = ", startNode, i, distances[i]);
        int current = i;
        while (current != -1) {
            printf("%d ", current);
            current = parent[current];
        }
        printf("\n");
    }
}


void dijkstra(int adjacencyMatrix[MAX_NODES][MAX_NODES], int numNodes, int startNode) {
    int distances[MAX_NODES], visited[MAX_NODES], parent[MAX_NODES];

    for (int i = 0; i < numNodes; i++) {
        distances[i] = INT_MAX;
        visited[i] = 0;
        parent[i] = -1;
    }

    distances[startNode] = 0;

    for (int count = 0; count < numNodes - 1; count++) {
        int u = minDistance(distances, visited, numNodes);
        visited[u] = 1;
        for (int v = 0; v < numNodes; v++) {
            if (!visited[v] && adjacencyMatrix[u][v] && distances[u] != INT_MAX &&
                distances[u] + adjacencyMatrix[u][v] < distances[v]) {
                distances[v] = distances[u] + adjacencyMatrix[u][v];
                parent[v] = u;
            }
        }
    }

    printShortestPath(distances, parent, startNode, numNodes);
}

int main() {
    int numNodes, startNode;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    if (numNodes > MAX_NODES) {
        printf("Number of nodes exceeds the maximum allowed.\n");
        return 1;
    }

    int adjacencyMatrix[MAX_NODES][MAX_NODES];
    printf("Enter the adjacency matrix (%dx%d):\n", numNodes, numNodes);
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    printf("Enter the starting node: ");
    scanf("%d", &startNode);

    dijkstra(adjacencyMatrix, numNodes, startNode);

    return 0;
}

