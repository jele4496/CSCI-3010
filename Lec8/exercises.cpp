#include <iostream>
#include <string>
#include <vector>

// Names: Jason Lee
//
//

// 1) implement two functions, AddToValues(std::vector<int> v1, int v2)
// and AddToValues(std::vector<double> v1, double v2)
void AddToValues(std::vector<int> &v1, int v2)
{
    for (auto &x : v1)
        x += v2;
}
void AddToValues(std::vector<double> &v1, double v2)
{
    for (auto &x : v1)
        x += v2;
}
// 2) Do your AddToValues functions have return values? why/ why not?
// Answer: No, the AddToValues functions do not have return values because they modify the input vectors v1 directly.

int main()
{
    // 3) Instantiate an int vector
    std::vector<int> int_vector{1, 2, 3, 4, 5};

    // 4) call AddToValues, passing in your int vector and another int.
    AddToValues(int_vector, 5);

    // 5) compile this file to object code
    // g++ -std=c++17 -Wall exercises.cpp -c

    // then run the command: nm -C exercises.o | grep "AddToValues"
    // How many versions of the AddToValues function are in the
    // compiled object code? Copy + paste the relevant lines here:
    //
    //
    // If the -C flag isn't working, you can omit it and still complete the exercise--this flag
    //
    // makes the output easier to read but isn't strictly necessary
    // 0000000000000154 T AddToValues(std::__1::vector<double, std::__1::allocator<double> >&, double)
    // 0000000000000000 T AddToValues(std::__1::vector<int, std::__1::allocator<int> >&, int)
}
