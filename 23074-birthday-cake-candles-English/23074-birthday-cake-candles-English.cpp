#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n], maxi = 0, res = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxi) maxi = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (maxi == arr[i]) res++;
    }
    cout << res;
    return;
}

int main() {
    solve();
    return 0;
}
