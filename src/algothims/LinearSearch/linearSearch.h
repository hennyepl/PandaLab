// This header file contains the implementation of the linear search algorithm.
// The implementation is based on the following algorithm:
// 1. Declare a function named linearSearch that takes two parameters:
//    a. An array of integers   (int array[])
//    b. The value to be searched (int value)
// 2. Declare a variable named index that will hold the index of the value to be searched.
// 3. Declare a variable named found that will hold the value of true or false.
// 4. Declare a variable named i that will hold the index of the array.
// 5. Declare a variable named j that will hold the index of the array. (j = 0)
// 6. Declare a variable named found that will hold the value of true or false. (found = false) 
// finally, return the value of found.


#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

// class that contains the function to search for a value in an array but not the implementation of the function.
class LinearSearch
{
public:
    // function that searches for a value in an array.
    bool linearSearch(int array[], int value, int size);
};

// implementation of the function.
bool linearSearch(int array[], int value, int size)
{
    int index = 0;
    bool found = false;
    int i = 0;
    int j = 0;
    while (i < size)
    {
        if (array[i] == value)
        {
            found = true;
            index = i;
            break;
        }
        i++;
    }
    return found;
}




#endif // LINEAR_SEARCH_H