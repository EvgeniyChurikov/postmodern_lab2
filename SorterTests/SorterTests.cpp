#include <gtest/gtest.h>
#include "../Sorter/Sorter.h"

TEST(SorterSuite, insertion_sort_test1)
{
    std::vector<int> v1{3, 2, 1}, v2{1, 2, 3};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_test2)
{
    std::vector<int> v1{64, 29, 61, 82, 55, 5, 38, 80, 86, 91, 20};
    std::vector<int> v2{5, 20, 29, 38, 55, 61, 64, 80, 82, 86, 91};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_test3)
{
    std::vector<int> v1{28, 79,  8, 75, 52, 41, 81, 22};
    std::vector<int> v2{8, 22, 28, 41, 52, 75, 79, 81};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_test4)
{
    std::vector<int> v1{64, 53, 69, 37, 90, 18, 62, 57, 60, 35};
    std::vector<int> v2{18, 35, 37, 53, 57, 60, 62, 64, 69, 90};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_test5)
{
    std::vector<int> v1{47, 86, 29, 83, 27, 61, 19, 76, 98, 6, 71, 13};
    std::vector<int> v2{6, 13, 19, 27, 29, 47, 61, 71, 76, 83, 86, 98};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, insertion_sort_test6)
{
    std::vector<int> v1{56, 94, 31, 24, 44, 93, 59, 47, 86, 29, 83, 27};
    std::vector<int> v2{24, 27, 29, 31, 44, 47, 56, 59, 83, 86, 93, 94};
    Sorter s(v1);
    s.insertion_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test1)
{
    std::vector<int> v1{3, 2, 1}, v2{1, 2, 3};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test2)
{
    std::vector<int> v1{64, 29, 61, 82, 55, 5, 38, 80, 86, 91, 20};
    std::vector<int> v2{5, 20, 29, 38, 55, 61, 64, 80, 82, 86, 91};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test3)
{
    std::vector<int> v1{28, 79,  8, 75, 52, 41, 81, 22};
    std::vector<int> v2{8, 22, 28, 41, 52, 75, 79, 81};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test4)
{
    std::vector<int> v1{64, 53, 69, 37, 90, 18, 62, 57, 60, 35};
    std::vector<int> v2{18, 35, 37, 53, 57, 60, 62, 64, 69, 90};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test5)
{
    std::vector<int> v1{47, 86, 29, 83, 27, 61, 19, 76, 98, 6, 71, 13};
    std::vector<int> v2{6, 13, 19, 27, 29, 47, 61, 71, 76, 83, 86, 98};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}

TEST(SorterSuite, quick_sort_test6)
{
    std::vector<int> v1{56, 94, 31, 24, 44, 93, 59, 47, 86, 29, 83, 27};
    std::vector<int> v2{24, 27, 29, 31, 44, 47, 56, 59, 83, 86, 93, 94};
    Sorter s(v1);
    s.quick_sort();
    v1 = s.getVector();
    EXPECT_EQ(v1.size(), v2.size());
    for (int i = 0; i < v1.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]);
    }
}
