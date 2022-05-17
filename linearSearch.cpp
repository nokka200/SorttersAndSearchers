#include <iostream>
#include <vector>

// clang++ -o linearSearch linearSearch.cpp -std=c++20
// source https://en.wikipedia.org/wiki/Linear_search

/*
Will search an int value in target list
*/
//template <typename T> 
//bool linearSearch(std::vector<T>listToSearchA1, T target, bool debugA2=false);

template <typename T> 
bool linearSearchRef(std::vector<T>&listToSearchA1, T &target, bool debugA2=false);

int main()
{
    int target = 979;
    double targetD = 96.23;
    std::vector<int> listToSearch = {19, 37, 53, 71, 96, 137, 289, 374, 559, 797, 979};
    std::vector<double> listToSearchD = {19.0, 37.1, 53.87, 96.23, 137.4, 289.99};
    std::cout << linearSearchRef(listToSearchD, targetD);

    return 0;
}

template <typename T>
bool linearSearch(std::vector<T>listToSearchA1, T target, bool debugA2)
{
    int listSize = listToSearchA1.size();
    int count = 0;
    if (listSize == 0)
    {
        if (debugA2)
        {
           std::cout << "target not found, list empty." << std::endl;
           std::cout << "count: " << count << std::endl;
        }
        // checks if list is empty
        return false;
    }

    int currentItem = listToSearchA1[count];

    if (debugA2)
    {
        std::cout << "-----------------------------" << std::endl;
        std::cout << "calling linearSearch:" << std::endl;
        std::cout << "list size: " << listSize << std::endl;
        std::cout << "target: " << target << std::endl;
        std::cout << std::endl;
    } 
    while (target >= currentItem && count < listSize)
    {
        if (currentItem == target)
        {
            if (debugA2)
                std::cout << "target: " << target << " found" << std::endl;
            return true;
        }

        count += 1;
        currentItem = listToSearchA1[count];

        if (debugA2)
        {
            std::cout << "after check" << std::endl;
            std::cout << "count: " << count << std::endl;
            std::cout << "currentItem: " << currentItem << std::endl;
            std::cout << std::endl;
        }
    }
    return false;
}

template <typename T>  
bool linearSearchRef(std::vector<T> &listToSearchA1, T &target, bool debugA2)
{
    /*
    Uses reference for arguments!
    */
    int listSize = listToSearchA1.size();
    int count = 0;
    if (listSize == 0)
    {
        if (debugA2)
        {
           std::cout << "target not found, list empty." << std::endl;
           std::cout << "count: " << count << std::endl;
        }
        // checks if list is empty
        return false;
    }

    T currentItem = listToSearchA1[count];

    if (debugA2)
    {
        std::cout << "-----------------------------" << std::endl;
        std::cout << "calling linearSearch:" << std::endl;
        std::cout << "list size: " << listSize << std::endl;
        std::cout << "target: " << target << std::endl;
        std::cout << std::endl;
    } 
    while (target >= currentItem && count < listSize)
    {
        if (currentItem == target)
        {
            if (debugA2)
                std::cout << "target: " << target << " found" << std::endl;
            return true;
        }

        count += 1;
        currentItem = listToSearchA1[count];

        if (debugA2)
        {
            std::cout << "after check" << std::endl;
            std::cout << "count: " << count << std::endl;
            std::cout << "currentItem: " << currentItem << std::endl;
            std::cout << std::endl;
        }
    }
    return false;
}