#include <iostream>
#include <vector>
//
// clang++ -o insertionSort insertionSort.cpp -std=c++20
// source https://en.wikipedia.org/wiki/Insertion_sort#List_insertion_sort_code_in_C

// TODO make a template so it will accept any list !

std::vector<int> insertionSort(std::vector<int> listToSort, bool debugA2=false);

int main()
{
    std::vector<int> unsortedList = {6, 5, 3, 1, 8, 7, 2, 4};

    std::vector<int> sortedList = insertionSort(unsortedList);

    for (const auto i : sortedList)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

std::vector<int> insertionSort(std::vector<int> listToSort, bool debugA2)
{
    // will sort an unsorted int based list to a sorted list.
    int n = 1;                          // assumes 0 based lists
    int listLen = listToSort.size();
    int temp = 0;

    if (debugA2)
        std::cout << "listLen: " << listLen << std::endl;

    while (n < listLen)
    {
        int pivot = n;                  // split point of sorted and unsorted list

        if (debugA2)
            std::cout << "before inner loop pivot: " << pivot << std::endl;

        while (pivot > 0 && listToSort[n - 1] > listToSort[n])
        {
            if (debugA2)
            {
                std::cout << "Before swap" << std::endl;
                std::cout << "n: " << n << std::endl;
                std::cout << "listToSort[n] " << listToSort[n] << std::endl;
                std::cout << "listToSort[n - 1] " << listToSort[n - 1] << std::endl;
            }
            
            temp = listToSort[n - 1];

            listToSort[n - 1] = listToSort[n];
            listToSort[n] = temp;
            n -= 1;
            
            if (debugA2)
            {
                std::cout << "After swap" << std::endl;
                std::cout << "n: " << n << std::endl;
                std::cout << "listToSort[n] " << listToSort[n] << std::endl;
                std::cout << "listToSort[n - 1] " << listToSort[n - 1] << std::endl;
                std::cout << "--------------------" << std::endl;
            }      
            if (debugA2)
            {
                for (const auto i : listToSort)
                {
                    std::cout << i;
                }
                std::cout << std::endl;
            }
        }  
    n += 1; 
    }
return listToSort;
}