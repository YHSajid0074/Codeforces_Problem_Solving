#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k=0;
    int k1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
k=k+arr[i];
        }else{
            k1=k1+arr[i];
        }
    }
   

    int fk=k1-(k);
    cout<<fk;
}