// Link: https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];

        sum += a[i];
    }

    double avg = sum / n;
    cout << fixed << setprecision(12) << avg << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}