// Link: https://atcoder.jp/contests/abc472/tasks/abc472_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int leftSum = 0;
    int ans = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        leftSum += arr[i];
        int rightSum = sum - leftSum;
        int value = abs(leftSum - rightSum);

        ans = min(ans, value);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}