#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, count, sum;
    count = sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a; sum +=a;
        }
        if (sum > 1) count++;
        sum = 0;
    }
    cout << count << endl;
    return 0;
}
