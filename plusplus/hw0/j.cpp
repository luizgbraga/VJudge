#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    string s[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i < 10) {
            cout << s[i - 1] << "\n";
        } else {
            if(i % 2 == 0) {
                cout << "even" << "\n";
            } else cout << "odd" << "\n";
        }
    }

    return 0;
}