#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
int r,b,d;
    for (int i = 0; i < n; i++) {
        r = 0;
         b = 0;
          d = 0;
        cin >> r >> b >> d;

        if ((r >= 1) && (b >= 1) && (r - b) <= d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
