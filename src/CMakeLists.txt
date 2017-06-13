
file(GLOB_RECURSE msorting-lib_SRCS *.cpp *.hpp)

add_library (MSorting ${msorting-lib_SRCS})

target_include_directories (MSorting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})