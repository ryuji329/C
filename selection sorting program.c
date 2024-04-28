#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void quickSort(int arr[], int left, int right) {
    // ここにコードを書く
    while(left<=right){
        for(int i=left;i<=right;i++)if(arr[i]<arr[left])swap(&arr[i],&arr[left]);
        left++;
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}
