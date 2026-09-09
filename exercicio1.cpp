#include <iostream>
#include <vector>
#include <utility> 

std::pair<std::vector<int>, int> contarTrocasBubbleSort(std::vector<int> arr) {
    int n = arr.size();
    int total_swaps = 0;
    
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Realiza a troca (swap)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                total_swaps++;
            }
        }
    }
    
    return {arr, total_swaps};
}
