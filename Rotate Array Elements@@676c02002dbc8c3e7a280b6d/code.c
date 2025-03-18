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
        arr[N - k + i] = temp[i];
    }
}
int main() {
    int N, k;
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    rotateArray(arr,N, k);
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    
    return 0;
}