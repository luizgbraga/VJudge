#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    ll cnt = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            cnt += (floor(n/i) - 1);
        } else {
            cnt += floor(n/i);
        }
    }

    cout << cnt;
    return 0;
}