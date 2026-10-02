#include <bits/stdc++.h>
using namespace std;
int elementsLesserThanX(vector<int>& nums, int x) {
    sort(nums.begin(), nums.end());
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] <= x) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans + 1;
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << elementsLesserThanX(nums, x) << endl;
return 0;
}