// Link: 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> stk(4);
    for(int i = 0; i < 4; i++) {
        cin >> stk[i];
    }

    bool isTriangle = false;
    bool isSegment = false;

    for(int i = 0; i < 4; i++) {
        vector<int> a;
        
        for(int j = 0; j < 4; j++) {
            if(i != j) {
                a.push_back(stk[j]);
            }
        }

        sort(a.begin(), a.end());

        int x = a[0], y = a[1], z = a[2];
        
        if(x + y > z) {
            isTriangle = true;
        } else if(x + y == z) {
            isSegment = true;
        }
    }

    if(isTriangle) {
        cout << "TRIANGLE" << '\n';
    } else if(isSegment) {
        cout << "SEGMENT" << '\n';
    } else {
        cout << "IMPOSSIBLE" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}