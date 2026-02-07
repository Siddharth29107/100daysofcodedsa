#include <stdio.h>

int main() {
    int n;
    
    // Read size
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // If array is empty
    if(n == 0) {
        return 0;
    }
    
    // Two-pointer approach
    int j = 0;  // Points to last unique element
    
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    
    // Print unique elements (from index 0 to j)
    for(int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
