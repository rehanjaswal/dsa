#include <bits/stdc++.h>
using namespace std;
int lastTrue(string s) {
    int l = 0, r = s.size() - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (s[mid] == 'T') {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}
int main() {
    string s;
    cin >> s;
    
    int ans = lastTrue(s);
    cout << ans << endl;
return 0;
}