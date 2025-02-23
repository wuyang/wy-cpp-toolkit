#include <gtest/gtest.h>
#include "wy_stack.h"

// Test case for stack operations
TEST(StackTest, Operations) {
    wy::Stack<int> stack;

    // Push some elements onto the stack
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    // Check the top element and pop it
    EXPECT_EQ(stack.Top(), 3);
    stack.Pop();

    EXPECT_EQ(stack.Top(), 2);
    stack.Pop();

    EXPECT_EQ(stack.Top(), 1);
    stack.Pop();

    // Ensure the stack is empty
    EXPECT_TRUE(stack.Empty());
}