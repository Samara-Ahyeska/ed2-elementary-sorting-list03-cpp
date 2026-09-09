#include <vector>

long long insertionSortKOrdered(std::vector<int>& array) {
    int n = array.size();
    long long total_comparisons = 0;

    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0) {
            total_comparisons++; 
            
            if (array[j] > key) {
                array[j + 1] = array[j];
                j--;
            } else {
                break; 
            }
        }
    }

    return total_comparisons;
}