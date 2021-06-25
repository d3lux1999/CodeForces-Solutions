#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int a;
        a = s.size();
        if (a > 10) {
            cout << s[0] << a-2 << s[a-1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
    return 0;
}
