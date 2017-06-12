

class InsertionSort {
public:

    template <typename Container>
    static void Sort(Container& array) {

        // Treat the first element as sorted
        typename Container::iterator i = array.begin();
        i++;
        for(; i != array.end(); i++) {

            // Loop which iterates downwards towards the start of the container
            for(typename Container::iterator j = i; j != array.begin(); j--) {
                // Compare with previous element
                if(*j > *(j-1)) {
                    // Element is in correct position, go back to parent loop
                    break;
                } else {
                    // Element still needs to move down array, swap this preceding
                    // element and continue on loop
                    iter_swap(j, j-1);
                }
            }
        }
    }

};