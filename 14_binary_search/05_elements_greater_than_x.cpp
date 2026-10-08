#include <bits/stdc++.h>
using namespace std;
int elementsGreaterThanX(vector<int>& nums, int x) {
    int l = 0, r = nums.size() - 1, ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] > x) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (ans == -1) return 0;
    return nums.size() - ans;
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << elementsGreaterThanX(nums, x) << endl;
return 0;
}