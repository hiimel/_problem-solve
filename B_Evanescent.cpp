#include <bits/stdc++.h>
using namespace std;

int cntLength(string &s) {
    if(s.empty()) {
        return 0;
    }

    int cnt = 1;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] != s[i - 1]) {
            cnt++;
        }
    }

    return cnt;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int minLength = INT_MAX;
    for(int i = 1; i <= n - 2; i++) {
        string new_str = s.substr(0, i) + s.substr(i + 1);

        int length = cntLength(new_str);
        minLength = min(minLength, length);
    }

    cout << minLength << '\n';
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