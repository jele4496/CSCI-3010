#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"

std::vector<int> AddN(std::vector<int> v, int n){
    for(int &i : v){
        i += n;
    }
    return v;
}

int Sign(int num) {
    if(num < 0)
        return -1;
    else if(num > 0)
        return 1;
    else
        return 0;
}

int RemoveTwos(int original){
    while(original % 2 == 0){
        original /=2;
    }
    return original;
}
