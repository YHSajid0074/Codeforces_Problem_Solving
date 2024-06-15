#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n][3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
cin>>arr[i][j];
    }
}


    for(int i=0;i<n;i++){
    char k=0;
    for(int j=0;j<3;j++){
        if(arr[i][0]+arr[i][1]==arr[i][2]){
            k='+';
        }else if(arr[i][0]-arr[i][1]==arr[i][2]){
            k='-';

        }
    }
    cout<<k<<endl;
}
}