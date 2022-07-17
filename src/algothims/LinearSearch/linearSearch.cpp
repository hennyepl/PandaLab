#include "linearSearch.h"
#include <iostream>

// call linearSearch function to search for a value in an array from linearSearch.h
int main()
{
    // ask user for the size of the array
    int size;
    std::cout << "\nEnter the size of the array: ";
    std::cin >> size;

    // ask user to enter the values of the array size = size
    
    int array[size];
    std::cout << "Enter the values of the array: "; 
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    // ask user to enter the value to be searched
    int value;
    std::cout << "Enter the value to be searched: ";
    std::cin >> value;

    // call linearSearch function to search for a value in an array, if the value is not found on the first
    // search, ask the user if they want to search again and again until the value is found, or until the user
    // say no to the search.
    bool found = linearSearch(array, value, size);
    if (found == false)
    {
        std::cout << "The value is not found in the array.\n";
        std::cout << "Do you want to search again? (y/n): ";
        
        
        char answer;
        std::cin >> answer;
        std::cout << "\033[1;31m"; 
        std::cout << "\n\n**\tSEARCH TERMINATED\t**\n";
        std::cout << "\033[0m" << "\n**\tGoodbye for now!\t**\n\n";
        
        while (answer == 'y')
        {
            std::cout << "Enter the value to be searched: ";
            std::cin >> value;
            found = linearSearch(array, value, size);
            if (found == true)
            {
                std::cout << "The value is found in the array.\n";
                break;
            }
            else
            {
                std::cout << "The value is not found in the array.\n";
                std::cout << "Do you want to search again? (y/n): ";
                std::cin >> answer;
                // print the following message with red color
                std::cout << "\033[1;31m"; 
                std::cout << "\n**\tSEARCH TERMINATED\t**\n";
                std::cout << "\033[0m" << "\n**\tGoodbye for now!\t**\n\n";
            }
        }
    }
    else
    {
        std::cout << "The value is found in the array.\n";
    }

    return 0;
}