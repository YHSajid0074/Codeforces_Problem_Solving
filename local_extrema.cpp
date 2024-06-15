#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=1;i<n-1;i++){
if((arr[i]>arr[i-1] && arr[i]>arr[i+1])||  (arr[i]<arr[i-1] && arr[i]<arr[i+1])){
    count++;
}
}

cout<<count;
}