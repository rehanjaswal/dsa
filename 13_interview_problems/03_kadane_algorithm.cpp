#include <bits/stdc++.h>
using namespace std;
int maxSubSum(vector<int>& nums, int n) {
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (sum < 0) sum = 0;
        sum += nums[i];
        ans  = max(ans, sum);
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << maxSubSum(nums, n);
    return 0;
}

// TC -> O(n)
// SC -> O(1)