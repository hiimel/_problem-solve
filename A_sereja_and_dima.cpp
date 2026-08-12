// Link: https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;
    int s = 0, d = 0;
    bool s_turn = true;

    while(left <= right) {
        int left_card = a[left];
        int right_card = a[right];

        if(left_card > right_card) {
            if(s_turn) {
                s += left_card;
            } else {
                d += left_card;
            }

            left++;

        } else {
            if(s_turn) {
                s += right_card;
            } else {
                d += right_card;
            }

            right--;
        }

        s_turn = !s_turn;
    }

    cout << s << " " << d << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}