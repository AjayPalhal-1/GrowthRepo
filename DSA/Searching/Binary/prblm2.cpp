// 2. First and Last Position of an Element
// Find the first and last occurrence of a target element in a sorted array.

// Example:

// Copy code
// Input: arr = [2, 4, 4, 4, 6, 8], target = 4  
// Output: [1, 3]  


#include <iostream>
using namespace std;

int findFirst(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            result = mid;
            end = mid - 1;  // Search left for earlier occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int findLast(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            result = mid;
            start = mid + 1;  // Search right for later occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {2, 4, 4, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout<<sizeof(arr)<<"    \n";
    // cout<<sizeof(arr[0])<<"    \n";
    // cout<<n<<"    \n";
    int target = 4;

    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}
