#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string v[4] = { "AC", "WA", "TLE", "RE" };
    int cnt[4] = { 0, 0, 0, 0};

    int n;
    cin >> n;

    string in[n];

    for(int i = 0; i < n; i++) {
        cin >> in[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            if(in[i] == v[j]) {
                cnt[j]++;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        cout << v[i] << " x " << cnt[i] << "\n";
    }
    
    return 0;
}