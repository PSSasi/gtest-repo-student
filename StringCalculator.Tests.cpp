#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite, Given0Output0)
{
    // Arrange
    StringCalculator testStringCalculatorObj;
    string input = "0";
    int expectedvalue = 0;

    // Act
    int actualvalue = testStringCalculatorObj.Add(input);

    // Assert
    ASSERT_EQ(actualvalue, expectedvalue);
}
TEST(StringCalculatorTestSuite, Given1Output0)
{
    // Arrange
    StringCalculator testStringCalculatorObj;
    string input = "1";
    int expectedvalue = 1;

    // Act
    int actualvalue = testStringCalculatorObj.Add(input);

    // Assert
    ASSERT_EQ(actualvalue, expectedvalue);
}

