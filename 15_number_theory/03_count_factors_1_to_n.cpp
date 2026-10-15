// TC -> O(N logN) and SC -> O(N logN)
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     int n;
//     cin >> n;
//     vector<vector<int>> factors(n + 1);
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j += i) {
//             factors[j].push_back(i);
//         }
//     }
//     for (int i = 1; i <= n; i++) {
//         cout << i << " -> " << factors[i].size() << endl;
//     }
// }
// int main() {
//     solve();
// return 0;
// }

// optimal approach -> reduce SC from N logN to N
// TC is still O(N logN)
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> factors(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            factors[j]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " -> " << factors[i] << endl;
    }
}
int main() {
    solve();
return 0;
}