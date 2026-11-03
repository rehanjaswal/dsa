// sort zeros ones and twos
#include <bits/stdc++.h>
using namespace std;
void sort012() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int l = 0, r = n - 1, i = 0;
    while (i <= r) {
        if (nums[i] == 0) {
            swap(nums[i], nums[l]);
            l++;
            i++;
        }
        else if (nums[i] == 1) {
            i++;
        }
        else {
            swap(nums[i], nums[r]);
            r--;
        }
    }
    for (int i = 0; i < n; i++) cout << nums[i] << " ";
}

int main() {
    sort012();
    return 0;
}