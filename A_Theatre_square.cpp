// Link: https://codeforces.com/contest/1/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, m, a;
    cin >> n >> m >> a;

    ll value = ceil(double(n)/ a);
    ll value1 = ceil(double(m)/ a);

    cout << value * value1  << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}