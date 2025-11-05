#include<stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int arr1[n1], arr2[n2];
    for (i=0;i<n1;i++)
        arr1[i]=arr[l+i];
    for (j=0;j<n2;j++)
        arr2[j]=arr[m+1+j];
    i=0,j=0;
    k=l;
    while (i<n1 && j<n2)
    {
        if (arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        while (i<n1)
        {
            arr[k] = arr2[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr, arr_size);
    merge_sort(arr, 0, arr_size - 1);
    printf("Sorted array:\n");
    printArray(arr, arr_size);
    return 0;
}
//
// Created by Suprakash Ghosh on 05-11-2025.
//