//Link: https://atcoder.jp/contests/abc045/tasks/abc045_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int idxA = 0, idxB = 0, idxC = 0;
    char player = 'a';

    while(1) {
        if(player == 'a') {
            if(idxA >= s1.length()) {
                cout << "A" << '\n';
                break;
            }

            char card = s1[idxA];
            idxA++;
            player = card;

        } else if(player == 'b') {
            if(idxB >= s2.length()) {
                cout << "B" << '\n';
                break;
            }

            char card = s2[idxB];
            idxB++;
            player = card;
            
        } else {
            if(idxC >= s3.length()) {
                cout << "C" << '\n';
                break;
            }

            char card = s3[idxC];
            idxC++;
            player = card;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}