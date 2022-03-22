#include "gtest/gtest.h"

#include "interface.h"

TEST(SampleTest, TestOne)
{
    EXPECT_EQ(1 + 1, 2);
}

TEST(SampleTest, TestTwo)
{
    EXPECT_EQ(1 + 1, 2);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}