#include <gtest/gtest.h>

TEST(TestSuiteName, TestName) { EXPECT_EQ(1 + 1, 3); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}