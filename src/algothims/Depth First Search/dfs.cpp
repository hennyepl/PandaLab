

#include "dfs.h"
#include <iostream>
#include <iomanip>
#include <list>


// ask user to enter graph size and values of the graph

int main()
{
    // ask user for the size of the graph
    int size;
    std::cout << "\nEnter the size of the graph: ";
    std::cin >> size;

    // ask user to enter the values of the graph
    Graph graph(size);
    std::cout << "\033[1;31m";
    std::cout << "\n* IN (Source, destination) FORM *\n";
    std::cout << "Enter the values of the graph: ";
    for (int i = 0; i < size; i++)
    {
        int source, destination;
        std::cin >> source >> destination;
        graph.addEdge(source, destination);
    }
    return 0;
}