#ifndef response_H
#define mastermind_H
#include "code.h"
#include "response.h"

class mastermind
{
public:
    mastermind(int n, int m);
    mastermind();
    void printCode();
    code humanGuess();
    response getResponse(code &gc);
    bool isSolved(response &r);
    void playGame();

private:
    code c;
    int num_n;
    int num_m;
};

#endif