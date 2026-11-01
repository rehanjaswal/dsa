// carry forward method
// TC -> O(N^2) and SC -> O(N)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) cin >> nums[i];

//     // carry forward
//     int mxLen = INT_MIN;
//     for (int l = 0; l < n; l++) {
//         int sum = 0;
//         for (int r = l; r < n; r++) {
//             sum += nums[r];
//             if (sum < x) {
//                 mxLen = max(mxLen, r - l + 1);
//             }
//         }
//     }
//     cout << mxLen << endl;
// return 0;
// }

// two pointer method

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    
    // two pointers
    int sum = 0, mxLen = 0;
    int l = 0;                // init left pointer as zero
    for (int r = 0; r < n; r++) { // right pointer starts from zero as well
        sum += nums[r];
        while (sum >= x) {      
            // invalid window, shrink the fuck out of it
            sum -= nums[l];
            l++;
        }
        // valid window
        mxLen = max(mxLen, r - l + 1);
    }
    cout << mxLen << endl;
return 0;
}