#include <gtest/gtest.h>
#include "../Sorter/Sorter.h"

TEST(SorterSuite, insertion_sort_empty)
{
    std::vector<int> v;
    Sorter s(v);
    s.insertion_sort();
    v = s.getVector();
    ASSERT_TRUE(v.empty());
}

TEST(SorterSuite, insertion_sort_nonempty)
{
    std::vector<int> v1{64, 29, 61, 82, 55, 5, 38, 80, 86, 91, 20};
    std::vector<int> v2{5, 20, 29, 38, 55, 61, 64, 80, 82, 86, 91};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_negatives)
{
    std::vector<int> v1{74, -25, 93, -35, 83, -51, 58, -72, -66, -9};
    std::vector<int> v2{-72, -66, -51, -35, -25, -9, 58, 74, 83, 93};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_filled)
{
    std::vector<int> v1(10, 5);
    Sorter s(v1);
    s.insertion_sort();
    std::vector<int> v2 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_empty)
{
    std::vector<int> v;
    Sorter s(v);
    s.quick_sort();
    v = s.getVector();
    ASSERT_TRUE(v.empty());
}

TEST(SorterSuite, quick_sort_nonempty)
{
    std::vector<int> v1{64, 29, 61, 82, 55, 5, 38, 80, 86, 91, 20};
    std::vector<int> v2{5, 20, 29, 38, 55, 61, 64, 80, 82, 86, 91};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_negatives)
{
    std::vector<int> v1{74, -25, 93, -35, 83, -51, 58, -72, -66, -9};
    std::vector<int> v2{-72, -66, -51, -35, -25, -9, 58, 74, 83, 93};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_filled)
{
    std::vector<int> v1(10, 5);
    Sorter s(v1);
    s.quick_sort();
    std::vector<int> v2 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, constructor_and_getter)
{
    std::vector<int> v1{8, 21, 62, 91, 57, 6, 85, 14, 96, 81};
    Sorter s(v1);
    std::vector<int> v2 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, setter_and_getter)
{
    std::vector<int> v1{8, 21, 62, 91, 57, 6, 85, 14, 96, 81};
    Sorter s;
    s.setVector(v1);
    std::vector<int> v2 = s.getVector();
    ASSERT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}
