

class InsertionSort {
public:

    static void Sort(std::vector<int>& array) {

        // Treat the first element as sorted
        std::vector<int>::iterator i = array.begin();
        i++;
        for(; i != array.end(); i++) {
            for(std::vector<int>::iterator j = i; j != array.begin(); j--) {
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