#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void bubble(int arr[], int n)
{
    if (n<2)
    {
        printf("invalid size");
        exit(1);
    }
    int i,j, temp;
    bool swapped;

    for (i=0;i<n-1;i++)
    {
        swapped=false;
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1]){
                temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            swapped=true;
        }
    }
    if (!swapped)
    {
        break;
    }
    }
}
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

bubble(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
//
// Created by Suprakash Ghosh on 02-11-2025.
//