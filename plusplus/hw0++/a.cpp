#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll p[4] = { a * c, a * d, b * c, b * d};

    sort(p, p + 4);

    cout << p[3] << " ";
    return 0;
}
