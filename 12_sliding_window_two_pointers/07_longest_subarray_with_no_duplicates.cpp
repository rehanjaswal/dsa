#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    unordered_map<int, int> freq;
    int mxLen = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        freq[nums[r]]++;
        while (freq[nums[r]] > 1) {                   // invalid window
            freq[nums[l]]--;              // remove nums[l]
            l++;                       // move forward eren yeager type shit
        }
        // window valid
        mxLen = max(mxLen, r - l + 1);
    }
    cout << mxLen << endl;
return 0;
}