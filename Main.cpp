#include "Edge.hpp"
#include "Graph.hpp" // Add include statement for Graph.h
#include <iostream>

int main(){

    // start of the initial pipeline that loads the test case file stream from std::cin

    int numOfVertices;
    int numOfEdges;

    if(!std::cin.eof()){
        std::cin >> numOfVertices;
        std::cin >> numOfEdges;
    }
    else{
        std::cout<<"Input not found!"<<std::endl;
        return NULL;
    }

    Graph graph(numOfVertices); // Create a Graph object with the given number of vertices

    while(!std::cin.eof()){
        int startVertice;
        int endVertice;
        std::cin >> startVertice;
        std::cin >> endVertice;
        Edge* newEdge = new Edge(startVertice, endVertice);
        graph.addEdge(newEdge); // Add the edge to the graph
    }

    // Now that the graph is loaded, you can proceed with the tasks

    // Task 1: Generate Adjacency Matrix
    graph.printAdjacencyMatrix(); // Implement this function in Graph.cpp

    // Task 2: Identify Odd Degree Vertices
    graph.findOddDegreeVertices(); // Implement this function in Graph.cpp

    // Task 3: Execute Dijkstra's Algorithm
    graph.executeDijkstra(); // Implement this function in Graph.cpp

    return 0;
}
