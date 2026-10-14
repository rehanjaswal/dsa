// TC -> O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;
void solve(int n) {
    int i = 1;
    while(i * i <= n) {
        if (n % i == 0) {
            cout << i << " ";
        }
        i++;
    }
    i--;
    while (i >= 1) {
        if (n % i == 0) {
            int f1 = i, f2 = n / i;
            if (f1 != f2) {
                cout << f2 << " ";
            }
        }
        i--;
    }
}
int main() {
    int n;
    cin >> n;
    solve(n);
return 0;
}