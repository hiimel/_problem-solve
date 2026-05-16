// Link: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maximum = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(a[i] > maximum) {
                maximum = a[i];
            }
        }

        cout << maximum << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}