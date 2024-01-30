#include "response.h"

void response::setCorrect(int c)
{
    correct = c;
}

void response::setIncorrect(int ic)
{
    incorrect = ic;
}

int response::getCorrect()
{
    return correct;
}

int response::getIncorrect()
{
    return incorrect;
}

bool operator==(response &r1, response &r2)
{
    return (r1.getCorrect() == r2.getCorrect()) && (r1.getIncorrect() == r2.getIncorrect());
}

std::ostream &operator<<(std::ostream &out, response &r)
{
    out << "Correct Guesses at Correct Location: " << r.getCorrect() << std::endl;
    out << "Correct Guesses at Incorrect Location: " << r.getIncorrect() << std::endl;
    return out;
}