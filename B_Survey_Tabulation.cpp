// Link: https://atcoder.jp/contests/abc471/tasks/abc471_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];

        for(char &ch: s[i]) {
            ch = tolower(ch);
        }
    }

    int maxCount = 0;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        
        for(int j = 0; j < n; j++) {
            if(s[i] == s[j]) {
                cnt++;
            }
        }

        maxCount = max(maxCount, cnt);
    }

    cout << maxCount << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}