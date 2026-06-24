// Link: https://codeforces.com/problemset/problem/2149/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cntNeg = 0;
    int cntZeros  = 0;

    int ops = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == -1) {
            cntNeg++;
        } else if(a[i] == 0) {
            cntZeros++;
        }
    }

    ops += cntZeros;

    if(cntNeg % 2 != 0) {
        ops += 2;
    }


    cout << ops << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}