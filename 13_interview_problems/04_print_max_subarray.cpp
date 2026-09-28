// kadane's algorithm with something extra
#include <bits/stdc++.h>
using namespace std;
void maxSumSubarray(vector<int>& nums, int n) {
    int l = -1, r = -1, ans = INT_MIN, sum = 0, start = 0;
    for (int i = 0; i < n; i++) {
        if (sum < 0) {
            sum = 0;
            start = i;
        }
        sum += nums[i];
        if (sum > ans) {
            ans = sum;
            l = start;
            r = i;
        }
    }
    for (int i = l; i <= r; i++) cout << nums[i] << " ";
    
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    maxSumSubarray(nums, n);
return 0;
}