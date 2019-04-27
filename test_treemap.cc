#include <gtest/gtest.h>
#include "treemap.h"

TEST(Treemap, Empty) {
Treemap<int, int> map;

/* Should be fully empty */
EXPECT_EQ(map.Empty(), true);
EXPECT_EQ(map.Size(), 0);
EXPECT_THROW(map.Get(42), std::exception);
}

TEST(Treemap, OneKey) {
Treemap<int, char> map;

/* Test some insertion */
map.Insert(23, 'A');
map.Insert(42, 'B');
EXPECT_EQ(map.Empty(), false);
EXPECT_EQ(map.Size(), 2);
EXPECT_EQ(map.MinKey(), 23);
EXPECT_EQ(map.MaxKey(), 42);
EXPECT_EQ(map.Get(23), 'A');
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
