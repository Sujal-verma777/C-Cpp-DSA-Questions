#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int &x : arr) cin >> x;

    int mx = *max_element(arr.begin(), arr.end());
    vector<int> count(mx + 1, 0);

    for (int x : arr) count[x]++;
    int idx = 0;
    for (int i = 0; i <= mx; i++)
        while (count[i]--) arr[idx++] = i;

    cout << "Sorted array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;
}