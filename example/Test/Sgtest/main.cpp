// CalculatorTest.cpp
#include <gtest/gtest.h>
#include "test.h"

// Fixture class for setting up tests
class CalculatorTest : public ::testing::Test {
protected:
    Calculator calculator;

    void SetUp() override {
        // Initialize resources needed for tests, if any
    }

    void TearDown() override {
        // Clean up resources after tests, if any
    }
};

// Test addition
TEST_F(CalculatorTest, TestAddition) {
    EXPECT_EQ(calculator.Add(3, 4), 7);
    EXPECT_EQ(calculator.Add(-3, 3), 0);
}

// Test subtraction
TEST_F(CalculatorTest, TestSubtraction) {
    EXPECT_EQ(calculator.Subtract(10, 4), 6);
    EXPECT_EQ(calculator.Subtract(0, 3), -3);
}

// Test multiplication
TEST_F(CalculatorTest, TestMultiplication) {
    EXPECT_EQ(calculator.Multiply(3, 5), 15);
    EXPECT_EQ(calculator.Multiply(0, 5), 0);
}

// Test division with valid input
TEST_F(CalculatorTest, TestDivision) {
    EXPECT_DOUBLE_EQ(calculator.Divide(8, 4), 2.0);
    EXPECT_DOUBLE_EQ(calculator.Divide(10, 2), 5.0);
}

// Test division by zero
TEST_F(CalculatorTest, TestDivisionByZero) {
    EXPECT_THROW(calculator.Divide(10, 0), std::invalid_argument);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    // 可以在这里进行一些全局的初始化操作，例如日志、配置等
    std::cout << "Starting tests...\n";

    int result = RUN_ALL_TESTS();

    // 在测试运行结束后可以进行一些清理操作
    std::cout << "Tests finished.\n";

    return result;
}