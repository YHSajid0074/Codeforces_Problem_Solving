#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int x1, x2, x3, x4, y1, y2, y3, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int side = max(
            max(abs(x1 - x2), abs(y1 - y2)),
            max(abs(x2 - x3), abs(y2 - y3))
        );

        int area = side * side;
        arr[i]=area;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
