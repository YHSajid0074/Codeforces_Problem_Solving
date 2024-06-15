#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int flag=0;
        int a,b,c;
        cin>>a>>b>>c;

        int sum1=a+b;
        int sum2=b+c;
        int sum3=a+c;

        if(sum1==c || sum2==a || sum3==b){
            flag=1;
        }
arr[i]=flag;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}
