#include "code.h"
#include <time.h>
#include <map>
#include <iostream>

void code::initialize()
{
    srand(time(NULL));
    // create random integer between 0 to m and push to the vector
    for (int i = 0; i < num_n; i++)
    {
        v.push_back(rand() % (num_m + 1));
    }
}

int code::checkCorrect(code &gc)
{
    // initialize count
    int count = 0;
    // compare every spot of the code to see if they matches or not
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
    // create two maps for the code and the guess code
    std::map<int, int> cmap, gcmap;
    // record the integers with their apperance in each code
    for (int i = 0; i < num_n; i++)
    {
        cmap[v[i]]++;
        gcmap[gc.v[i]]++;
    }
    for (auto &i : gcmap)
    {
        // find if there are the same integers between two codes
        if (cmap.find(i.first) != cmap.end())
        {
            // the minimum between the apperance in each code that have the same integers gives the number of correct integer guesses
            count = count + std::min(cmap[i.first], i.second);
        }
    }
    // minus the correct position gives the correct guesses with incorrect positions
    count = count - checkCorrect(gc);
    return count;
}

void code::insertCode(int n)
{
    // helper function to generate guess codes
    v.push_back(n);
}

void code::printCode()
{
    // helper function to print the codes
    for (int i = 0; i < num_n; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}