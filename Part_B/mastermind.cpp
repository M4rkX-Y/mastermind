#include "mastermind.h"

mastermind::mastermind(int n, int m)
{
    code temp(n, m);
    c = temp;
    num_n = n;
    num_m = m;
}

mastermind::mastermind()
{
    code temp(5, 10);
    c = temp;
    num_n = 5;
    num_m = 10;
}

void mastermind::printCode()
{
    c.printCode();
}

code mastermind::humanGuess()
{
    code gc(num_n, num_m);
    for (int i = 0; i < num_n; i++)
    {
        while (true)
        {
            int temp;
            std::cout << "Input the " << i + 1 << " Integer in Your Guess Code: ";
            std::cin >> temp;
            if (temp <= num_m && temp >= 0)
            {
                gc.insertCode(temp);
                break;
            }
            std::cout << "Guess Integer Out of Range, Please Re-enter." << std::endl;
        }
    }
    return gc;
}

response mastermind::getResponse(code &gc)
{
    response r;
    r.setCorrect(c.checkCorrect(gc));
    r.setIncorrect(c.checkIncorrect(gc));
    return r;
}

bool mastermind::isSolved(response &r)
{
    response cr(num_n, 0);
    return r == cr;
}

void mastermind::playGame()
{
    c.initialize();
    std::cout << "The Secrete Code is: ";
    c.printCode();
    for (int i = 0; i < 10; i++)
    {
        code gc = humanGuess();
        response r = getResponse(gc);
        std::cout << "Your Guess is: ";
        gc.printCode();
        if (isSolved(r))
        {
            std::cout << "You Won!" << std::endl;
            break;
        }
        else if (i == 9)
        {
            std::cout << r;
            std::cout << "You Lose!" << std::endl;
        }
        else
        {
            std::cout << r;
            std::cout << "You Have " << 9 - i << " More Tries!" << std::endl;
        }
    }
}