#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int check_triangle(int a, int b, int c) {
    if(a + b > c && a + c > b && b + c > a && a != b && b != c && a != c) {
        return 1;
    } else return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    ll l[n];
    for(int i = 0; i < n; i++) {
        cin >> l[i];
    }

    int cnt = 0;

    sort(l, l + n);

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(check_triangle(l[i], l[j], l[k])) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
