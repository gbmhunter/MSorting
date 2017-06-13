#include "gtest/gtest.h"

#include "MSorting/InsertionSort.hpp"

namespace {

// The fixture for testing class Foo.
    class InsertionSortTest : public ::testing::Test {
    protected:

        InsertionSortTest() {
        }

        virtual ~InsertionSortTest() {
        }
    };

    TEST_F(InsertionSortTest, ReverseOrderTest) {

        std::vector<int> array = { 3, 2, 1 };

        InsertionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

    TEST_F(InsertionSortTest, SortTest2) {

        std::vector<int> array = { 2, 3, 1 };

        InsertionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

    TEST_F(InsertionSortTest, AlreadySorted) {

        std::vector<int> array = { 1, 2, 3 };

        InsertionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

}  // namespace