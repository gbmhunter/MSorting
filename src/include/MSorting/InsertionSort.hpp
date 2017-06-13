
#include <algorithm>

class InsertionSort {
public:

    template <typename Container>
    static void Sort(Container& array) {

        // Treat the first element as sorted
        typename Container::iterator it = array.begin();
        it++;
        for(; it != array.end(); it++) {

            // Loop which iterates downwards towards the start of the container
            for(typename Container::iterator j = it; j != array.begin(); j--) {
                // Compare with previous element
                if(*j > *(j-1)) {
                    // Element is in correct position, go back to parent loop
                    break;
                } else {
                    // Element still needs to move down array, swap this preceding
                    // element and continue on loop
                    std::iter_swap(j, j-1);
                }
            }
        }
    }

};