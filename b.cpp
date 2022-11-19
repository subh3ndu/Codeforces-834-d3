#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Lost Permutation

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    ll sum = 0; int mx = -1; 
    for(auto x : v) {
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    ll k = (mx * (mx++)) / 2;
    ll req = s + sum - k;

    while(req > 0) {
        req -= mx;
        mx++;
    }

    if(req == 0) cout << "YES\n";
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
