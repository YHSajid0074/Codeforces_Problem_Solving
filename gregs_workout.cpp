#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int chestSum = 0;
    int bicepsSum = 0;
    int backSum = 0;

    for(int i = 0; i < n; i++) {
        if(i % 3 == 0) {
            chestSum += arr[i];
        } else if(i % 3 == 1) {
            bicepsSum += arr[i];
        } else {
            backSum += arr[i];
        }
    }

    if(chestSum >= bicepsSum && chestSum >= backSum) {
        cout << "chest";
    } else if(bicepsSum >= chestSum && bicepsSum >= backSum) {
        cout << "biceps";
    } else {
        cout << "back";
    }

    return 0;
}
