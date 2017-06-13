
file(GLOB_RECURSE msorting-test_SRCS *.cpp *.hpp)

add_executable (msorting-test ${msorting-test_SRCS})


target_link_libraries (msorting-test LINK_PUBLIC MSorting gtest)