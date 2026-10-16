// TC -> O(n) and SC -> O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n /= i;
//         }
//     }
// return 0;
// }

// prime factorisation with queries, say 1 <= q <= 10^6 and 1 <= n <= 10^6
// lets find an optimal approach yeah?

#include <bits/stdc++.h>
using namespace std;
void primeFactorisation(int n) {
    // build spf array
    vector<int> spf(n + 1);
    for (int i = 2; i <= n; i++) {
        // mark all numbers as prime
        spf[i] = i;
    }
    for (int i = 2; i * i <= n; i++) {
        if (spf[i] == i) { // if prime
            for (int j = i * i; j <= n; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
    while (n != 1) {
        cout << spf[n] << " ";
        n /= spf[n];
    }
    cout << "\n";
}
int main() {
    int n;
    cin >> n;
    primeFactorisation(n);
return 0;
}