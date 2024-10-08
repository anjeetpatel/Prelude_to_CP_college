#include <iostream>

using namespace std;

int binarysearch(int arr[], int low, int high, int key)
{
    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            return binarysearch(arr, low, mid - 1, key);
        else if (key > arr[mid])
            return binarysearch(arr, mid + 1, high, key);
    }
    return -1;
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int index = binarysearch(arr, 0, size - 1, 10);
    cout << "Element found at index: " << index << endl;
}