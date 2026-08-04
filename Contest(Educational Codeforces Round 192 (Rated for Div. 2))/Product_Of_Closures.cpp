#include <bits/stdc++.h>
using namespace std;

string toBinary(int x) {
    if (x == 0) return "0";

    string s = "";

    while (x > 0) {
        s += (x & 1) + '0';
        x >>= 1;
    }

    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        int l,r,n;
        cin>>l>>r>>n;
        
    }

    return 0;
}