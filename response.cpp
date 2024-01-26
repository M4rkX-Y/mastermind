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

bool operator==(const response &r1, const response &r2)
{
    return (r1.correct == r2.correct) && (r1.incorrect == r2.incorrect);
}

std::ostream &operator<<(std::ostream &out, response &r)
{
    out << "Correct Guesses at Correct Location: " << r.correct << std::endl;
    out << "Correct Guesses at Incorrect Location: " << r.incorrect << std::endl;
    return out;
}