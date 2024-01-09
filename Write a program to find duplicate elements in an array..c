#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }
    printf("\n");

    return 0;
}
