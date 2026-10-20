#include <gtest/gtest.h>
#include "brackets.h"

TEST(BracketsTest, Balanced)
{
    EXPECT_TRUE(checkBrackets("()"));
    EXPECT_TRUE(checkBrackets("{[()]}"));
    EXPECT_TRUE(checkBrackets("a*(b+[c-d])"));
}

TEST(BracketsTest, Unbalanced)
{
    EXPECT_FALSE(checkBrackets("("));
    EXPECT_FALSE(checkBrackets("([)]"));
    EXPECT_FALSE(checkBrackets("(()"));
    EXPECT_FALSE(checkBrackets(")("));
}

TEST(BracketsTest, NoBrackets)
{
    EXPECT_TRUE(checkBrackets("abc123"));
    EXPECT_TRUE(checkBrackets(""));
}
