#include "gtest/gtest.h"

#include "MSorting/InsertionSort.hpp"

namespace {

// The fixture for testing class Foo.
    class FooTest : public ::testing::Test {
    protected:
        // You can remove any or all of the following functions if its body
        // is empty.

        FooTest() {
            // You can do set-up work for each test here.
        }

        virtual ~FooTest() {
            // You can do clean-up work that doesn't throw exceptions here.
        }

        // If the constructor and destructor are not enough for setting up
        // and cleaning up each test, you can define the following methods:

        virtual void SetUp() {
            // Code here will be called immediately after the constructor (right
            // before each test).
        }

        virtual void TearDown() {
            // Code here will be called immediately after each test (right
            // before the destructor).
        }

        // Objects declared here can be used by all tests in the test case for Foo.
    };


// Tests that Foo does Xyz.
    TEST_F(FooTest, SortTest) {

        std::vector<int> array;
        array.push_back(3);
        array.push_back(2);
        array.push_back(1);

        InsertionSort::Sort(array);

        EXPECT_EQ(1, array[0]);
        EXPECT_EQ(2, array[1]);
        EXPECT_EQ(3, array[2]);
    }

}  // namespace