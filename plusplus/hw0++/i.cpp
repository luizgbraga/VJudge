#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int p[m];
    for(int i = 0; i < m; i++) {
        cin >> p[i];
    }

    int diff = 1001;

    sort(p, p + m);

    for(int i = 0; i <= m - n; i++) {
        if(p[i + n - 1] - p[i] < diff) {
            diff = p[i + n - 1] - p[i];
        }
    } 

    cout << diff << "\n";
    return 0;
}
