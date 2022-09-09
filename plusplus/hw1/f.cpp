#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string names[5] = { "Danil", "Olya", "Slava", "Ann", "Nikita" };

    string s;
    cin >> s;

    int max = 0;
    for(int i = 0; i < 5; i++) {
        if(s.find(names[i]) != -1) {
            max++;
        }
    }

    if(max == 1) {
        cout << "YES";
    } else cout << "NO";

    return 0;
}