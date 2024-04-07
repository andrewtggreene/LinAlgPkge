#include <iostream>
#include "vector.h"
using std::cout;
using std::endl;
int main()
{
    std::cout << "Hello World" << std::endl;
    Vector vector;
    vector.length = 200;
    cout << vector.length;
}