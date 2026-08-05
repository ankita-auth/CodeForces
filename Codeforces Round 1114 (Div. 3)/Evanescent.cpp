#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count original groups
        int groups = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                groups++;
        }

        int ans = groups;

        // Try deleting every possible character (except first and last)
        for (int i = 1; i <= n - 2; i++) {
            int cur = groups;

            if (s[i - 1] == s[i + 1]) {
                if (s[i] != s[i - 1])   // pattern aba
                    cur -= 2;
            }
            else {
                if (s[i] != s[i - 1] && s[i] != s[i + 1]) // single-character group
                    cur -= 1;
            }

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}