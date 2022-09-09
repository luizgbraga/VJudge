#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    ll v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll cnt = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]) {
            cnt += v[i - 1] - v[i];
            v[i] += v[i - 1] - v[i];
        }
    }

    cout << cnt << "\n";

    return 0;
}