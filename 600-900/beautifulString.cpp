#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> v(t);

    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < t; i++) {
        string &s = v[i];
        int n = s.size();
        bool bad = false;

        for (int j = 0; j < n; j++) {
            if (s[j] == '?') {
                for (char c : {'a', 'b', 'c'}) {
                    if ((j > 0 && s[j-1] == c) || (j+1 < n && s[j+1] == c)) {
                        continue; // skip if neighbor is same
                    }
                    s[j] = c;
                    break;
                }
            }
        }

        // check if still invalid (like "aa")
        for (int j = 1; j < n; j++) {
            if (s[j] == s[j-1]) {
                bad = true;
                break;
            }
        }

        if (bad) cout << "-1\n";
        else cout << s << "\n";
    }

    return 0;
}
