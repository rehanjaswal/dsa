// find missing and repeating numbers from 0 to n. 0 <= A[n] <= n - 1

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    for (int i = 0; i < n; i++) {
        int correctIndex = nums[i];
        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
            i--; // stay at the same index as long as above condition holds true
        }
    }

    cout << "missing elements - ";
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            // i is missing
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "repeating elements - ";
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            // nums[i] is repeating
            cout << nums[i] << " ";
        }
    }
    cout << endl;

    return 0;
}