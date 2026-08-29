// Link: https://atcoder.jp/contests/abc473/tasks/abc473_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int halfSum = 0;
    for(int i = 0; i < n / 2; i++) {
        halfSum += arr[i];
    }

    cout << sum - halfSum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}