// // problem statement - print al primes from 1 to n
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     int n;
//     cin >> n;
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false;

//     for (int i = 2; i <= n; i++) {
//         if(isPrime[i]) {
//             for (int j = 2 * i; j <= n; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++) {
//         if(isPrime[i]) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main() {
//     solve();
// return 0;
// }

// optimal sieve approach here goes nothing

#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if(isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int number = 2; number <= n; number++) {
        if(isPrime[number]) {
            cout << number << " ";
        }
    }
}
int main() {
    solve();
return 0;
}