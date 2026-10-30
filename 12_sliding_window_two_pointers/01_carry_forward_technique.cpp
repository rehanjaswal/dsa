#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    for (int l = 0; l < n; l++) {
        int sum = 0;
        for (int r = l; r < n; r++) {
            sum += nums[r];
            cout << sum << " ";
        }
        cout << endl;
    }
return 0;
}

// TC -> O(n^2)
// SC -> O(1)