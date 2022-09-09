#include <bits/stdc++.h>

using namespace std;

int main() {
    int v[5];
    for(int i = 0; i < 5; i++) {
        cin >> v[i];
    }
    
    for(int i = 0; i < 5; i++) {
        if(v[i] == 0) {
            cout << i + 1 << "\n";
        } 
    }
    return 0;
}