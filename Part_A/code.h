#ifndef code_H
#define code_H

#include <vector>

class code
{
public:
    code(int n = 0, int m = 0) : num_n(n), num_m(m) {}
    void initialize();
    int checkCorrect(code &gc);
    int checkIncorrect(code &gc);
    void insertCode(int n);
    void printCode();

private:
    std::vector<int> v;
    int num_n;
    int num_m;
};

#endif