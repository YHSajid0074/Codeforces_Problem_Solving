#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        unordered_map<int, int> frequency;
        vector<int> ar(m);

        for (int j = 0; j < m; j++) {
            cin >> ar[j];
            frequency[ar[j]]++; 
        }

        int maxFrequency = 0;
        int result = -1;

        for (int j = 0; j < m; j++) {
            if (frequency[ar[j]] > maxFrequency) {
                maxFrequency = frequency[ar[j]];
                result = ar[j];
            }
        }

        if (maxFrequency >= 3) {
            cout << result << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
