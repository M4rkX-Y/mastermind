#include "code.h"
#include <time.h>
#include <iostream>

void code::initialize()
{
    srand(time(NULL));
    for (int i = 0; i < num_n; i++)
    {
        v.push_back(rand() % (num_m + 1));
    }
}

int code::checkCorrect(code &gc)
{
    int count = 0;
    for (int i = 0; i < num_n; i++)
    {
        if (v[i] == gc.v[i])
        {
            count++;
        }
    }
    return count;
}

int code::checkIncorrect(code &gc)
{
    int count = 0;
    // TODO: Implement the incorrect logic
    return count;
}

void code::insertCode(int n)
{
    v.push_back(n);
}

void code::printCode()
{
    for (int i = 0; i < num_n; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}