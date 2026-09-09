#include <vector>

void selectionSortKPasses(std::vector<int>& V, int N, int k) {
   
    
    for (int i = 0; i < passes; i++) {
        int min_idx = i; 
              for (int j = i + 1; j < N; j++) {
            if (V[j] < V[min_idx]) {
                min_idx = j; // Atualiza o índice do menor elemento
            }
        }
        
        if (min_idx != i) {
            int temp = V[i];
            V[i] = V[min_idx];
            V[min_idx] = temp;
        }
    }
}
