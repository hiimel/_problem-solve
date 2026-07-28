//Link: https://codeforces.com/contest/1676/problem/A

#include <bits/stdc++.h>
using namespace std;

void work() {
    string s;
    cin >> s;

    int n = s.length();
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < 3; i++) {
        sum1 += char(s[i] - '0');
    }

    for(int i = n -1; i > 2; i--) {
        sum2 += char(s[i] - '0');
    }

    if(sum1 == sum2) {
        cout << "YES" <<'\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        work();
    }

    return 0;
}
