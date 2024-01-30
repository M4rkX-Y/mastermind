#ifndef response_H
#define response_H
#include <iostream>
class response
{
public:
    response(int c = 0, int ic = 0) : correct(c), incorrect(ic) {}
    void setCorrect(int c);
    void setIncorrect(int ic);
    int getCorrect();
    int getIncorrect();

private:
    int correct;
    int incorrect;
};

bool operator==(response &r1, response &r2);
std::ostream &operator<<(std::ostream &out, response &r);

#endif
