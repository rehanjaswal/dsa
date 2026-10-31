// find max subarray sum using the sliding window technique
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int ans = INT_MIN, sum = 0;
    for (int i = 0; i < k; i++) { // create first sliding window from 0 to k
        sum += nums[i];
    }
    ans = sum;

    for (int i = k; i < n; i++) {
        sum += nums[i];
        sum -= nums[i - k];
        ans = max(ans, sum);
    }

    cout << ans << endl;
return 0;
}

// TC -> O(N)
// SC -> O(1)