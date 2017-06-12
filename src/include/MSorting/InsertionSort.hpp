

class InsertionSort {
public:

    InsertionSort() {
    }

    ~InsertionSort() {}

    static void Sort(std::vector<int>& array) {

        // Treat the first element as sorted
        for(int i = 1; i < array.size(); i++) {

            for(int j = i; j > 0; j--) {
                // Compare with previous element
                if(array[j] > array[j-1]) {
                    // Element is in correct position, go back to parent loop
                    break;
                } else {
                    // Element still needs to move down array, swap this preceding
                    // element and continue on loop
                    std::swap(array[j], array[j-1]);
                }
            }
        }
    }

};