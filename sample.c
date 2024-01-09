#include <stdio.h>

int kthElement(int arr1[], int N, int arr2[], int M, int K) {
    int result, i = 0, j = 0, count = 0;

    while (i < N && j < M) {
        if (arr1[i] < arr2[j]) {
            result = arr1[i];
            i++;
        } else {
            result = arr2[j];
            j++;
        }
        count++;

        if (count == K)
            return result;
    }

    while (i < N) {
        result = arr1[i];
        i++;
        count++;
        if (count == K)
            return result;
    }

    while (j < M) {
        result = arr2[j];
        j++;
        count++;
        if (count == K)
            return result;
    }

    return -1; // This should not happen for valid inputs
}

int main() {
    int N, M, K;

    // Input the sizes of the arrays
    printf("Enter the size of array 1: ");
    scanf("%d", &N);
    printf("Enter the size of array 2: ");
    scanf("%d", &M);

    // Input the sorted arrays
    int arr1[N], arr2[M];
    printf("Enter the elements of array 1 in sorted order: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the elements of array 2 in sorted order: ");
    for (int i = 0; i < M; i++)
        scanf("%d", &arr2[i]);

    // Input the value of K
    printf("Enter the value of K: ");
    scanf("%d", &K);

    // Find and print the Kth element
    int result = kthElement(arr1, N, arr2, M, K);
    printf("The element at position %d in the final sorted array is: %d\n", K, result);

    return 0;
}
