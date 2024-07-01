#include <conio.h>
#include <stdio.h>

void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);

void main() {
    int n, a[10], i;
    clrscr(); // Clear the screen

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    getch(); // Wait for a key press
}

void quicksort(int a[], int low, int high) {
    if(low < high) {
        int pindex = partition(a, low, high);
        quicksort(a, low, pindex - 1);
        quicksort(a, pindex + 1, high);
    }
}

int partition(int a[], int low, int high) {
    int i = low + 1;
    int pivot = a[low];
    int j = high;
    int temp;

    while(i <= j) {
        while(a[i] <= pivot && i <= high) {
            i++;
        }
        while(a[j] > pivot && j >= low) {
            j--;
        }
        if(i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}
