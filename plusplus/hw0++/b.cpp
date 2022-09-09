#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    int a = (4 * x - y);
    int b = (y - 2 * x);

    if(a >= 0 && b >= 0 && a % 2 == 0 && b % 2 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
