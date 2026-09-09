#include <vector>

long long contarInversoesInsertionSort(std::vector<int> array) {
    long long total_shifts = 0;
    int n = array.size();

    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            total_shifts++;
            j--;
        }
        array[j + 1] = key;
    }

    return total_shifts;
}