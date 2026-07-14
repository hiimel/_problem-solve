// Link: https://codeforces.com/contest/2244/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_time = 0;
    int length = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '#') {
            length++;
        } else {
            if(length > 0) {
                int time = (length + 1) / 2;
                max_time = max(max_time, time);
                length = 0;
            }
        }
    }

    if(length > 0) {
        int time = (length +1) / 2;
        max_time = max(max_time, time);
    }

    cout << max_time << '\n';
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