#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;

        unordered_set<int> distinct_k;
        for (int x = 0; x <= 100; x++) {
            for (int y = 0; y <= 100; y++) {
                int k = l / (pow(a, x) * pow(b, y));
                if (k * pow(a, x) * pow(b, y) == l)
                    distinct_k.insert(k);
            }
        }

        cout << distinct_k.size() << endl;
    }

    return 0;
}
