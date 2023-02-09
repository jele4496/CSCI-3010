#include <iostream>
#include <string>
#include <vector>

// Names: Jason Lee
//
//

// we'd like to write a function that is applicable to many types but
// we don't want to copy paste everything

// For example, here is a templated Add function
template <typename T>
T Add(T v1, T v2)
{
    return v1 + v2;
}

// 6) implement a templated version of AddToValues, "AddToValues2".
template <typename T>
void AddToValues2(std::vector<T> &v1, T v2)
{
    for (auto &x : v1)
        x += v2;
}

struct MyStruct
{
    int x;
    MyStruct operator+(const MyStruct &rhs) const { return {x + rhs.x}; }
};

int main()
{
    // 7) call AddToValues2, passing in an int vector and another int.
    std::vector<int> int_vector{1, 2, 3, 4, 5};
    AddToValues2(int_vector, 5);

    // 8) compile this file to object code
    // g++ -Wall -std=c++17 exercises2.cpp -c
    // then run: nm -C exercises2.o | grep "AddToValues2"
    // How many versions of the AddToValues2 function are in the
    // compiled object code? Copy + paste the relevant lines here:
    // 0000000000000294 T void AddToValues2<double>(std::__1::vector<double, std::__1::allocator<double> >&, double)
    // 00000000000001d0 T void AddToValues2<int>(std::__1::vector<int, std::__1::allocator<int> >&, int)
    // 9) call AddToValues2, passing in a vector of a non-int type and a value that you can add
    // successfully to the elements
    std::vector<double> double_vector{1.0, 2.0, 3.0, 4.0, 5.0};
    AddToValues2(double_vector, 2.5);

    // 10) compile this file to object code
    // g++ -Wall -std=c++17 exercises2.cpp -c
    // then run: nm -C exercises2.o | grep "AddToValues2"
    // How many versions of the AddToValues2 function are in the
    // compiled object code? Copy + paste the relevant lines here:
    // 0000000000000294 T void AddToValues2<double>(std::__1::vector<double, std::__1::allocator<double> >&, double)
    // 00000000000001d0 T void AddToValues2<int>(std::__1::vector<int, std::__1::allocator<int> >&, int)

    // 11) Experiment to find calls to this function that you would like to work but that do
    // not yet work. for each function call that doesn't work, comment about what type of
    // error is produced.
    // If the elements of the vector do not have a valid + operator, the AddToValues2 function will not work and produce a compiler error. For example, attempting to use AddToValues2 with a std::vector<std::string> will result in a compiler error because the + operator is not defined for std::string.

    // 12) Create a struct that has an int field. Instantiate a vector of these structs.
    // Instantiate another instance of this struct.
    std::vector<MyStruct> struct_vector{{1}, {2}, {3}, {4}, {5}};
    MyStruct single_struct{10};

    // 13) Call AddToValues2 w/ the vector of structs and single struct from #12
    // Is there an error? If yes, what is it?
    //
    // Answer: There will be an error because the + operator is not defined for the MyStruct type.

    // 14) If there was an error, attempt to fix it.
    struct MyStruct
    {
        int x;
        MyStruct operator+(const MyStruct &rhs) const { return {x + rhs.x}; }
    };
}
