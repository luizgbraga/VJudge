#include<bits/stdc++.h>

using namespace std;

const int N = 1e6+10;
int cnt[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n], ord_a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    // sort(a, a + n);

    int cur = 0;
    for(int i = 0; i < N; i++)  {
        while(cnt[i]) {
            ord_a[cur] = i;
            cur++;
            cnt[i]--;
        }
    }

    if(n % 2) {
        int i = (n - 1)/2;
        cout << ord_a[i];
        return 0;
    } else {
        int i = (n - 2)/2;
        cout << ord_a[i];
        return 0;
    }
}