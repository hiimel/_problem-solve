#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int maxLen = 1, curr = 1;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == s[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }

        maxLen = max(maxLen, curr);
    }

    cout << maxLen << endl;
    return 0;
}