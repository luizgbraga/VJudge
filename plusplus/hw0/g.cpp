#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string v[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    if(n < 10) {
        cout << v[n - 1] << "\n";
    } else {
        cout << "Greater than 9";
    }

    return 0;
}