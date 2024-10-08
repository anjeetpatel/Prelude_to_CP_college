#include <iostream>

using namespace std;

int binarysearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int findingpivot(int arr[], int low, int high)
{
    while (low <= high)
    {
        if (arr[low] <= arr[high])
            return low;

        int mid = (low + high) / 2;

        if (mid > 0 && arr[mid] < arr[mid - 1])
            return mid;

        if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int pivotedbinarysearch(int arr[], int low, int high, int key)
{
    int pivot = findingpivot(arr, low, high);

    if (pivot == 0)
        return binarysearch(arr, 0, high, key);

    if (key == arr[pivot])
        return pivot;

    if (key >= arr[low])
        return binarysearch(arr, low, pivot - 1, key);

    return binarysearch(arr, pivot + 1, high, key);
}

int main()
{
    int arr[] = {12, 0};

    int size = sizeof(arr) / sizeof(int);

    int index = pivotedbinarysearch(arr, 0, size - 1, 12);

    cout << index;
}
