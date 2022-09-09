#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, r;
    cin >> n >> r;

    double seno = sin(PI/n);
    double R = r/((1/seno) - 1);

    cout << setprecision(10) << R << "\n";
    return 0;
}