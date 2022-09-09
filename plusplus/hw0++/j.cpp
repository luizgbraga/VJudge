#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int v[n];
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 1) {
            cnt++;
        }
    }

    if(cnt == n) {
        cout << n - 1;
        return 0;
    }

    int delta = 0;
    int cnt_zeros = 0;
    int cnt_ones = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(i == j) {
                v[i] == 0 ? cnt_zeros++ : cnt_ones++;
                cnt_zeros - cnt_ones > delta ? delta = cnt_zeros - cnt_ones : false;
            } else {
                for(int k = i; k <= j; k++) {
                    v[k] == 0 ? cnt_zeros++ : cnt_ones++;
                }

                cnt_zeros - cnt_ones > delta ? delta = cnt_zeros - cnt_ones : false;
            }
            cnt_zeros = 0;
            cnt_ones = 0;
        }
    }

    cout << delta + cnt;

    return 0;
}
