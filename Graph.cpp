// Include necessary header files
#include "Graph.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

// Constructor
Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    // Allocate memory for the adjacency matrix
    adjacencyMatrix = new int*[numVertices];
    for (int i = 0; i < numVertices; ++i) {
        adjacencyMatrix[i] = new int[numVertices];
        // Initialize all elements of the matrix to 0
        for (int j = 0; j < numVertices; ++j) {
            adjacencyMatrix[i][j] = 0;
        }
    }
    // Allocate memory for the array to store odd degree vertices
    oddDegreeVertices = new int[numVertices];
    numOddDegreeVertices = 0; // Initialize the count of odd degree vertices
}

// Destructor
Graph::~Graph() {
    // Deallocate memory for the adjacency matrix
    for (int i = 0; i < numVertices; ++i) {
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;
    // Deallocate memory for the array of odd degree vertices
    delete[] oddDegreeVertices;
}

// Function to add an edge to the graph
void Graph::addEdge(Edge* edge) {
    int start = edge->getStartVert();
    int end = edge->getEndVert();
    adjacencyMatrix[start - 1][end - 1] = 1; // Mark edge in the adjacency matrix
    adjacencyMatrix[end - 1][start - 1] = 1; // Assuming undirected graph, mark both directions
}

// Function to print the adjacency matrix
void Graph::printAdjacencyMatrix() {
    std::cout << "Adjacency Matrix of the Graph:" << std::endl;
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            std::cout << adjacencyMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to find odd degree vertices
void Graph::findOddDegreeVertices() {
    // Initialize all elements of the oddDegreeVertices array to 0
    for (int i = 0; i < numVertices; ++i) {
        oddDegreeVertices[i] = 0;
    }

    // Loop through each vertex to calculate its degree
    for (int i = 0; i < numVertices; ++i) {
        int degree = 0;
        for (int j = 0; j < numVertices; ++j) {
            degree += adjacencyMatrix[i][j];
        }
        // If degree is odd, mark the vertex as odd degree
        if (degree % 2 != 0) {
            oddDegreeVertices[numOddDegreeVertices++] = i + 1;
        }
    }
}

// Function to execute Dijkstra's algorithm
void Graph::executeDijkstra() {
    // Implement Dijkstra's algorithm here
    // You can use a separate function for Dijkstra's algorithm or implement it directly here
    // Use arrays or linked lists to represent the graph and compute shortest paths
    // Make sure to print the results as specified in the instructions
}
