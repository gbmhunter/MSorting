#include "gtest/gtest.h"

#include "MSorting/SelectionSort.hpp"

namespace {
    
    class SelectionSortTest : public ::testing::Test {
    protected:

        SelectionSortTest() {
        }

        virtual ~SelectionSortTest() {
        }
    };

    TEST_F(SelectionSortTest, ReverseOrderTest) {

        std::vector<int> array = { 3, 2, 1 };

        SelectionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

    TEST_F(SelectionSortTest, SortTest2) {

        std::vector<int> array = { 2, 3, 1 };

        SelectionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

    TEST_F(SelectionSortTest, AlreadySorted) {

        std::vector<int> array = { 1, 2, 3 };

        SelectionSort::Sort(array);

        EXPECT_EQ(std::vector<int>({ 1, 2, 3 }), array);
    }

}  // namespace