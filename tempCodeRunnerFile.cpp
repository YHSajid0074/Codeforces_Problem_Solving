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
        for (int k = 1; k <= l; k++) {
            if (l % k == 0) {
                int remainder = l / k;
                while (remainder % a == 0)
                    remainder /= a;
                while (remainder % b == 0)
                    remainder /= b;
                if (remainder == 1)
                    distinct_k.insert(k);
            }
        }

        cout << distinct_k.size() << endl;
    }

    return 0;
}


