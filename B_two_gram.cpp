// Link: https://codeforces.com/contest/977/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt[26][26] = {0};
    for(int i = 0; i < n - 1; i++) {
        int first = s[i] - 'A';
        int second = s[i + 1] - 'A';

        cnt[first][second]++;
    }

    int maxCnt = 0;
    char first, second;
    
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            if(cnt[i][j] > maxCnt) {
                maxCnt = cnt[i][j];

                first = 'A' + i;
                second = 'A' + j;
            }
        }
    }

    cout << first << second << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}