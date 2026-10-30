#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int>& nums, int k) {
    int ans = INT_MIN, n = nums.size();
    for (int l = 0; l < n; l++) {
        int sum = 0;
        for (int r = l; r < n; r++) {
            sum += nums[r];
            if (r - l + 1 == k) {
                ans = max(ans, sum);
            }
        }
    }
    return ans;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << maxSum(nums, k) << endl;
return 0;
}