// Link: https://codeforces.com/contest/2247/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    
    for(int  i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum  += a;
    }

    if(n % 2 == 0 && sum % 4 == 0) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}