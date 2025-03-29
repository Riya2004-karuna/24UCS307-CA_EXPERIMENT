#include<stdio.h>

void MaxMinRecursive(int arr[], int n, int index, int *max, int *min)
{
    if (index == n) 
        return;

    if (arr[index] > *max)
        *max = arr[index];

    if (arr[index] < *min)
        *min = arr[index];

    MaxMinRecursive(arr, n, index + 1, max, min);
}

int main()
{
    int arr[] = {5,3,99,2,12,99,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];

    MaxMinRecursive(arr, n, 1, &max, &min); 
    printf("Maximum number is== %d\n", max);
    printf("Minimum number is== %d\n", min);

    return 0;
}

