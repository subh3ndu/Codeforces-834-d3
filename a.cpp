#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Yes-Yes?

void solve() {
    string s;
    cin >> s;
    int n = (int)s.size();

    string s1 = "", s2 = "", s3 = "";
    for(int i = 0; i < n; i++) {
        if(i % 3 == 0) {
            s1 += 'Y';
            s2 += 'e';
            s3 += 's';
        }
        else if(i % 3 == 1) {
            s1 += 'e';
            s2 += 's';
            s3 += 'Y';
        } else {
            s1 += 's';
            s2 += 'Y';
            s3 += 'e';
        }
    }

    if(s == s1 or s == s2 or s == s3) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
