#include <iostream>
#include <vector>
#include <cmath>

// clang++ -o binarySearch binarySearch.cpp -std=c++20

bool binarySearch(std::vector<int>sortedListA1, int targetA2, bool debugA3=true);

int main()
{
    std::vector<int> listToSearch = {19, 37, 53, 71, 96, 137, 289, 374, 559, 797};
    bool re = binarySearch(listToSearch, 37, true);
    std::cout << "re: " << re << std::endl;
    return 0;
}

bool binarySearch(std::vector<int>sortedListA1, int targetA2, bool debugA3)
{
    int start = 0;                                  // start of list
    int end = sortedListA1.size() - 1;              // end of list
    int middle = NULL;                              // middle point

    while(start <= end)
    {
        middle = (start + end) / 2;                 // find the middlepoint
        if (sortedListA1[middle] < targetA2)
        {
            // if list value is less than target shift middle point to right
            if (debugA3)
            {
                std::cout << "target not found, switching right" << std::endl;
            }
            start = middle + 1;
        }
        else if (sortedListA1[middle] > targetA2)
        {
            // if list value is less than target shift middle point to left
            if (debugA3)
            {
                std::cout << "target not found, switching left" << std::endl;
            }
            end = middle - 1;
        }
        else
        {
            if (debugA3)
            {
                std::cout << "target: " << targetA2 << " found !!" << std::endl;
            }
            return true;
        }
    }
    return false;
}



/*
bool binarySearch(std::vector<int>sortedListA1, int targetA2, bool debugA3)
{
    int start = 0;                              // list start
    int end = sortedListA1.size() - 1;          // list final element - 1 
    int middle = NULL;

    while (end != start)
    {
        middle = std::ceil((start + end) / 2);
        if (debugA3)
            std::cout << "middle: " << middle << std::endl;
        if (sortedListA1[middle] > targetA2)
        {
            end = middle - 1;
            if (debugA3)
                std::cout << "end changed: " << end << std::endl;
        }
        else
        {
            start = middle;
            if (debugA3)
            {
                std::cout << "start changed: " << start << std::endl;
                std::cout << "end: " << end << std::endl;
            }
        }
    }

    if (debugA3)
    {
        std::cout << "outside loop" << std::endl;
        std::cout << "middle: " << middle << std::endl;
        std::cout << "sortedList[middle] : " << sortedListA1[middle] << std::endl;
    } 

    if (sortedListA1[middle] == targetA2)
    {
        if (debugA3)
        {
            std::cout << "target found" << std::endl;
        }
        return true;
    }

    if (debugA3)
        {
            std::cout << "target not found" << std::endl;
        }

    return false;
}*/