// Sum of Elements on Array
// Problem on Array
#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {11, 12, 23, 34, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumOfArray(arr, n) << endl;
    return 0;
}
