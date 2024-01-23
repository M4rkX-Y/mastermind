#include "code.h"
#include <time.h>
#include <iostream>

void code::initialize()
{
    srand(time(NULL));
    for (int i = 0; i < num_n; i++)
    {
        v[i] = rand() % num_m + 1;
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
    return 0;
}

void code::printCode()
{
    for (int i = 0; i < num_n; i++)
    {
        std::cout << v[i] << " ";
    }
}