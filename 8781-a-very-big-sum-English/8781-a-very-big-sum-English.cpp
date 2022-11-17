#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    ull res = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        res += x;
    }
    cout << res;
    return;
}

int main() {
    solve();
    return 0;
}
