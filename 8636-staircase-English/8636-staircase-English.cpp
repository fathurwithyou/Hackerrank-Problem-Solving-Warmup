#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int cnt = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (cnt > j) {
                cout << " ";
            } else
                cout << '#';
        }
        cout << "\n";
        cnt--;
    }
    return;
}

int main() {
    solve();
    return 0;
}
