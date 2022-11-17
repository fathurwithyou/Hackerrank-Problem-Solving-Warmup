#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    double x, resp = 0, resz = 0, resn = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0)
            resp++;
        else if (x == 0)
            resz++;
        else
            resn++;
    }
    double res1 = resp / n, res2 = resn / n, res3 = resz / n;
    cout << fixed << setprecision(6) << res1 << endl;
    cout << fixed << setprecision(6) << res2 << endl;
    cout << fixed << setprecision(6) << res3 << endl;
    return;
}

int main() {
    solve();
    return 0;
}
