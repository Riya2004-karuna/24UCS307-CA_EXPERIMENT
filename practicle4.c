#include <stdio.h>

void merge(int arr[], int left,int right ,int mid)
 {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l1[n1], r1[n2];
    int i, j, k;
    for (i = 0; i < n1; i++) 
    
        l1[i] = arr[left + i];
        
    for (j = 0; j < n2; j++) 
    
        r1[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
	 {
        if (l1[i] <= r1[j]) 
            arr[k++] = l1[i++];
            
        else 
            arr[k++] = r1[j++];
    }

    while (i < n1) 
        arr[k++] = l1[i++];
    while (j < n2) 
        arr[k++] = r1[j++];
}

void mergeSort(int arr[], int left, int right) 
{
    if (left < right) 
	{
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

int main() 
{
    int arr[] = {12,11,13,5,6,7,1,99};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf(" before the sorted : \n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf(" after the sorting: \n");
    printArray(arr, size);

   return 0;
}

