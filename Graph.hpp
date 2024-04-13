#ifndef GRAPH_H
#define GRAPH_H

#include "Edge.hpp"

class Graph {
private:
    int numVertices;
    int** adjacencyMatrix; // Adjacency matrix as a 2D array
    int* oddDegreeVertices; // Array to store odd degree vertices
    int numOddDegreeVertices; // Number of odd degree vertices found

public:
    Graph(int numVertices); // Constructor
    ~Graph(); // Destructor
    void addEdge(Edge* edge); // Function to add an edge to the graph
    void printAdjacencyMatrix(); // Function to print the adjacency matrix
    void findOddDegreeVertices(); // Function to find odd degree vertices
    void executeDijkstra(); // Function to execute Dijkstra's algorithm
};

#endif // GRAPH_H
