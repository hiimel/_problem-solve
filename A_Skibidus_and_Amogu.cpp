//Link: https://codeforces.com/contest/2065/problem/A

#include <bits/stdc++.h>
using namespace std;

void work() {
    string w;
    cin >> w;

    w.pop_back();
    w.pop_back();

    cout << w + "i" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        work();
    }

    return 0;
}