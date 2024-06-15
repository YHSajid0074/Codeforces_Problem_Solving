#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int ar[n];
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<m;j++){
            if(arr[j]<0){
                arr[j]=-arr[j];
            }
            sum+=arr[j];
        }
        ar[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
}