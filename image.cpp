#include<iostream>
#include<map>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    char a[4];
    for(int j=0;j<4;j++){
        cin>>a[j];
    }
int count = 0;
for (int j = 0; j < 4; j++) {
    bool found = false;
    for (int k = j+1; k < 4; k++) {
        if (a[j]==a[k]) {
            found = true;
            break;
        }
    }
    if (found==false) {
        count++;
    }
}
 arr[i]=count-1;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }


}