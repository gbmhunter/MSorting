

add_executable (msorting-test main.cpp InsertionSortTests.cpp)


target_link_libraries (msorting-test LINK_PUBLIC MSorting gtest)