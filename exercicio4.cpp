#include <vector>

void custom_bubble_sort(std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int a = arr[j];
            int b = arr[j + 1];
            
            bool a_even = (a % 2 == 0);
            bool b_even = (b % 2 == 0);
            bool needs_swap = false;
            
            if (!a_even && b_even) {
                needs_swap = true;
            } 
            else if (a_even && b_even) {
                    if (a > b) {
                    needs_swap = true;
                }
            } 
            else if (!a_even && !b_even) {
                if (a < b) {
                    needs_swap = true;
                }
            }
           
            if (needs_swap) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
