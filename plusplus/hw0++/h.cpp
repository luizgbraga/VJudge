#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // muito grande! ler como string
    string n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n.size(); i++) {
        sum += n[i] - '0';
    }

    cout << (sum % 9 == 0 ? "Yes": "No") << "\n";

    return 0;
}