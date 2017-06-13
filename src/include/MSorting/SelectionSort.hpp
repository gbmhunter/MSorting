/// \file   SelectionSort.hpp
/// \author Geoffrey Hunter <gbmhunter@gmail.com>

#include <algorithm>
#include <iostream>

class SelectionSort {
public:

    template <typename Container>
    static void Sort(Container& container) {

        // The sorted section of the container lies below it, it signifies the first
        // element in the unsorted section of the container
        for(typename Container::iterator it = container.begin(); it != container.end(); it++) {

            // Initialise the lowest value to the current container position
            typename Container::iterator lowestVal = it;

            // Loop which iterates upwards from the current unsorted position
            for(typename Container::iterator j = it; j != container.end(); j++) {

                // Compare with lowest values
                if (*j < *lowestVal) {
                    lowestVal = j;
                }
            }

            // Now that we have found the lowest value in the unsorted section of the container,
            // swap it with the first unsorted value, which upon the next iteration of the loop,
            // will become part of the sorted section of the container
            std::iter_swap(lowestVal, it);
        }
    }

};