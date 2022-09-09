#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // sort(v, v + n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(v[j + 1] < v[j]) {
                swap(v[j], v[j + 1]);
            }
        }
    }

    for(int i = 1; i < n; i++) {
        if(v[i] > v[0]) {
            cout << v[i];
            return 0;
        }
    }

    cout << "NO";
    return 0;
}