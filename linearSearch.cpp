#include <iostream>
#include <vector>

// clang++ -o linearSearch linearSearch.cpp -std=c++20
// source https://en.wikipedia.org/wiki/Linear_search

bool linearSearch(std::vector<int>listToSearchA1, int target, bool debugA2=false);

int main()
{
    std::vector<int> listToSearch = {19, 37, 53, 71, 96, 137, 289, 374, 559, 797, 979};
    std::cout << linearSearch(listToSearch, 797, true);

    return 0;
}

bool linearSearch(std::vector<int>listToSearchA1, int target, bool debugA2)
{
    int listSize = listToSearchA1.size();
    int count = 0;
    if (listSize == 0)
    {
        if (debugA2)
        {
           std::cout << "target not found" << std::endl;
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