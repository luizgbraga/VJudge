#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + n);

    int total = 0;
    for(int i = 0; i < k; i++) {
        total += v[i];
    }

    cout << total;
    return 0;
}