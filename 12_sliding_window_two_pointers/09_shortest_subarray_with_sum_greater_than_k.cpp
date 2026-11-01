#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    
    int sum = 0, minLen = INT_MAX;
    int l = 0;
    for (int r = 0; r < n; r++) {
        sum += nums[r];
        while (sum > k) {
            minLen = min(minLen, r - l + 1);
            sum -= nums[l];
            l++;
        }
    }
    cout << minLen << endl;
    return 0;
}

// TC -> O(n)
// SC -> O(1)