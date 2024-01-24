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
    // initialize count
    int count = 0;
    // create a new temporary vector and set it equal to v because we want to modify the vector to prevent double counting
    std::vector<int> tv = v;
    // loop through the two vectors and check if they are the same
    for (int i = 0; i < num_n; i++)
    {
        // case where they are not the same
        if (gc.v[i] != v[i])
        {
            // loop through the guess code and compare with modified temporary code
            for (int j = 0; j < num_n; j++)
            {
                if (tv[j] == gc.v[i])
                {
                    // increment count, and change the temporary tv at that location to be something out of the range to prevent double counting
                    count++;
                    tv[j] = num_m + 1;
                    break;
                }
            }
        }
        else
        {
            // if they are the same put that that location out of range to prevent double counting
            tv[i] = num_m + 1;
        }
    }
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