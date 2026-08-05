#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int index = binarySearch(arr, n, target);
    if (index != -1) cout << "Element found at index " << index << "." << endl;
    else cout << "Element not found in the array." << endl;
    return 0;
}
