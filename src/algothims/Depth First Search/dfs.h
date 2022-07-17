// This is a header file for the depth first search algorithm.
// This header file contains the function declarations for the depth first search algorithm.
// and the implementation of the algorithm.

#ifndef DFS_H
#define DFS_H
#include <iostream>
#include <iomanip>
#include <list>
#include <vector>

// Graph class contains the data structure for the graph.
class Graph
{
    private:
        
        std::vector<std::vector<int>> adj;
        bool * visited;
    public:
        
        Graph(int V);
        int V;
        void addEdge(int source, int destination);
        void removeEdge(int source, int destination);
        void DFS(int vertex);
        
};

// initialize the graph with the given values from the user.
Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
    visited = new bool[V];
}


// add an edge to the graph
void Graph::addEdge(int source, int destination)
{
    adj[source].push_back(destination);
}

// remove the edge from the graph
void Graph::removeEdge(int source, int destination)
{
    for (int i = 0; i < adj[source].size(); i++)
    {
        if (adj[source][i] == destination)
        {
            adj[source].erase(adj[source].begin() + i);
            break;
        }
    }
}

// DEPTH FIRST SEARCH ALGORITHM
// This function implements the depth first search algorithm.

void graph::DFS(int vertex)
{
    visited[vertex] = true;
    std::cout << vertex << " ";
    for (int i = 0; i < adj[vertex].size(); i++)
    {
        if (!visited[adj[vertex][i]])
        {
            DFS(adj[vertex][i]);
        }
    }
}


#endif // DFS_H