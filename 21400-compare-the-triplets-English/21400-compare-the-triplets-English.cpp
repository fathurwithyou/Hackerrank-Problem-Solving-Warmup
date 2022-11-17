#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int al[3], bob[3], res1 = 0, res2=0;
    
    for (int i = 0;  i< 3; i++){
        cin >> al[i];
    }
    for (int i = 0; i< 3; i++){
        cin >> bob[i];
        if (al[i] > bob[i]) res1++;
        if (bob[i] > al[i]) res2++;
    }
    cout << res1 << " " << res2;
    return;
}

int main() {
    solve();
    return 0;
}
