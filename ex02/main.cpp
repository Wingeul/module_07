#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"


int main(int, char**)
{
    Array<int> numbers(50);
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    Array<int> empty;
    int *comparateur = new int[50]; 


    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        const int value = rand();
        numbers[i] = value;
        comparateur[i] = value;
        if (numbers[i] != comparateur[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    std::cout << "array size: " << numbers.size() << std::endl;

    try
    {
        numbers[80] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}