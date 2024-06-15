#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        int k=0;
        int m;
        cin>>m;
        int arr[m];
        
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[j];
        }
        if(sum%2==0){
k=1;
        }
        ar[i]=k;
    }
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}