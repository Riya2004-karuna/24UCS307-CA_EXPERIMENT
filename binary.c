#include <stdio.h>

int binary(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {23, 44, 55, 63, 66, 77, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1      ;
    int result = binary(arr, 0, n - 1, x);
    if (result != -1) {
        printf("Element %d is present at index %d.\n", x, result);
    } else {
        printf("Element %d is not present in the array.\n", x);
    }
    return 0;
}

