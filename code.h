#ifndef code_H
#define code_H

#include <vector>

class code
{
public:
    std::vector<int> v;
    code(int n = 0, int m = 0) : num_n(n), num_m(m) {}
    void initialize();
    int checkCorrect(code &gc);
    int checkIncorrect(code &gc);
    void insertCode(int num);
    void printCode();

private:
    int num_n;
    int num_m;
};

#endif