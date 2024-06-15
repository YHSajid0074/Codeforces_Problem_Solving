#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> ab;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        ab.insert(k);
    }



    for (int x : ab) {
        cout << x<<" ";
    }
   

    return 0;
}
