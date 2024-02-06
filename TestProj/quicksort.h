#pragma once

void swap(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int low, int high)
{
    // Choose the pivot as highest item:
    int pivot = arr[high];
    // Index of smaller element and used to indicate the right position of pivot found so far:
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] <= pivot)
        {
            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    // when low is less than high
    if (low < high)
    {
        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // Recursion Call
        // quicksort left:
        quickSort(arr, low, pi - 1);
        // quicksort right:
        quickSort(arr, pi + 1, high);
    }
}

/// Used to run quickSort algorithm on provided integer array.
int runQuickSort(int* arr, int size)
{ 
    // Show pre-sorted array:
    printf("\nUnsorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Sort the thing:
    quickSort(arr, 0, size - 1);

    // Print the sorted array:
    printf("\n\nSorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}