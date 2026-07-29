// Link: https://codeforces.com/contest/1760/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> arr(3);
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[1] << '\n';
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