#include <stdio.h>

void rotateArray(int arr[], int N, int k) {
    k = k % N; 
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < N - k; i++) {
        arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
int main() {
    int N, k;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    
    printf("Enter the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    
    rotateArray(arr, ,N k);
    
    printf("Rotated array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}