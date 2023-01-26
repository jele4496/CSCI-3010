#define CATCH_CONFIG_MAIN
#include "functions_to_implement.cpp"
#include <vector>
#include "main.cpp"
#include <gtest/gtest.h>

TEST(RemoveTwosTest, PositiveNos) { 
    int num = 12;
    int expected = 3;
    int actual = RemoveTwos(num);
    ASSERT_EQ(expected, actual);
}

TEST(RemoveTwosTest, NegativeNos) { 
    int num = -12;
    int expected = -3;
    int actual = RemoveTwos(num);
    ASSERT_EQ(expected, actual);
}

TEST(FactorialTest, PositiveNos) { 
    long long num = 5;
    long long expected = 120;
    long long actual = Factorial(num);
    ASSERT_EQ(expected, actual);
}

TEST(SignTest, PositiveNos) { 
    int num = 5;
    int expected = 1;
    int actual = Sign(num);
    ASSERT_EQ(expected, actual);
}

TEST(SignTest, NegativeNos) { 
    int num = -5;
    int expected = -1;
    int actual = Sign(num);
    ASSERT_EQ(expected, actual);
}

TEST(SignTest, Zero) { 
    int num = 0;
    int expected = 0;
    int actual = Sign(num);
    ASSERT_EQ(expected, actual);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

