#include "mastermind.h"
#include <iostream>

int main()
{
    // ------------------------- Part A ----------------------------

    // initialize the code
    code c(5, 6);
    c.initialize();

    // initialize the sample guess codes
    code gc1(5, 6);
    code gc2(5, 6);
    code gc3(5, 6);
    // guess code 1: (5, 0, 3, 2, 6)
    gc1.insertCode(5);
    gc1.insertCode(0);
    gc1.insertCode(3);
    gc1.insertCode(2);
    gc1.insertCode(6);
    // guess code 2: (2, 1, 2, 2, 2)
    gc2.insertCode(2);
    gc2.insertCode(1);
    gc2.insertCode(2);
    gc2.insertCode(2);
    gc2.insertCode(2);
    // guess code 3: (1, 3, 3, 4, 5)
    gc3.insertCode(1);
    gc3.insertCode(3);
    gc3.insertCode(3);
    gc3.insertCode(4);
    gc3.insertCode(5);

    std::cout << "The secret code is: " << std::endl;
    c.printCode();

    std::cout << "The guess codes are: " << std::endl;
    gc1.printCode();
    gc2.printCode();
    gc3.printCode();

    std::cout << "The results of checks are: " << std::endl;
    std::cout << c.checkCorrect(gc1) << ", " << c.checkIncorrect(gc1) << std::endl;
    std::cout << c.checkCorrect(gc2) << ", " << c.checkIncorrect(gc2) << std::endl;
    std::cout << c.checkCorrect(gc3) << ", " << c.checkIncorrect(gc3) << std::endl;

    // ------------------------- Part B ----------------------------
    mastermind game;
    game.playGame();
    return 0;
};