// This header file contanins the function declarations for the Breadth First Search algorithm.
// and the implementation of the algorithm.

#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <iomanip>
#include <queue>


// breadthFirstSearch class declaration
class breadthFirstSearch
{
public:
    // constructor
    breadthFirstSearch();
    
    // destructor
    ~breadthFirstSearch();
    
    // breadthFirstSearch function declaration
    void breadthFirstSearchAlgorithm(int array[], int size, int value);
};



#endif // BFS_H