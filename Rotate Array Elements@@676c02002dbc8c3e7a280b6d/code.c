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
    
    for (int i = 0; i < N; i++) 
    {
        scanf("%d\n", &arr[i]);
    }
    
    scanf("%d\n", &k);
    
    rotateArray(arr,N, k);
    
    for (int i = 0; i <= N+1; i++)
     {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    
    return 0;
}