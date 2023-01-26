#include <iostream>
#include <functions_to_implement.cpp>
using namespace std;

int RemoveTwos(int original);
long long Factorial(long long n);
int Sign(int num);

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int new_num = RemoveTwos(num);
    cout << "Number with twos removed: " << new_num << endl;

    long long factorial = Factorial(num);
    cout << "Factorial of " << num << " is: " << factorial << endl;

    int sign = Sign(num);
    cout << "Sign of " << num << " is: " << sign << endl;

    return 0;
}
