//Link: https://codeforces.com/problemset/problem/2126/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    int n = x.length();
    char min = '9';
    
    for(int i = 0; i < n; i++) {
        if(x[i] < min) {
            min = x[i];
        }
    }

    cout << min - '0' << '\n'; 
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