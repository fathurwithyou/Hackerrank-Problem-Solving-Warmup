#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr, res1 = 0, res2 = 0;
    int cntl = 0, cntr = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr;
            if (cntl == j) res1 += arr;
            if (cntr == j) res2 += arr;
        }
        cntr--;
        cntl++;
    }
    cout << abs(res1 - res2);
    return;
}

int main() {
    solve();
    return 0;
}
