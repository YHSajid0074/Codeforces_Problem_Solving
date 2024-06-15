#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int arr[a];
        for(int j=0;j<a;j++){
            cin>>arr[j];
        }
        int sum=0;
        int sum1=0;
        int k=0;
        for(int j=0;j<a;j++){
            if(arr[j]%2==0){
                sum+=arr[j];
            }else{
                sum1+=arr[j];
            }
        }
        if(sum>sum1){
k=1;
        }else{
            k=0;
        }

        ar[i]=k;
    }
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}