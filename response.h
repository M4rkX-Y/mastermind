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
    friend bool operator==(const response &r1, const response &r2);
    friend std::ostream &operator<<(std::ostream &out, response &r);

private:
    int correct;
    int incorrect;
};

#endif
