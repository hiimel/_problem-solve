//Link: https://codeforces.com/contest/1676/problem/C

#include <bits/stdc++.h>
using namespace std;

int calDifference(string& s1, string& s2) {
    int diff_sum = 0;
    for(int i = 0; i < s1.length(); i++) {
        diff_sum += abs(s1[i] - s2[i]);
    }

    return diff_sum;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int min_Diff = INT_MAX;

    for(int i = 0; i < n; i++) {
        for(int j= i + 1; j < n; j++) {
            int res = calDifference(s[i], s[j]);
            min_Diff = min(min_Diff, res);
        }
    }

    cout << min_Diff << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}