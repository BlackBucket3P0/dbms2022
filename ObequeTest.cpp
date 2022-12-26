#include <Odeque.cpp>
#include <iostream>
#include <gtest/gtest.h> 

TEST(ODT, odq) {
    // Arange
    const int expected_value = 2;
    
    // Act
    Odeque* my_deque = new Odeque(expected_value); 
    
    // Assert
    ASSERT_TRUE(my_deque->value == expected_value);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
