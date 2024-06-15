#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ak[n];
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<a;i++){
            if(arr[i]==1){
                count++;
            }
        }
ak[j]=a-(count/2);
    }
    for(int i=0;i<n;i++){
        cout<<ak[i]<<endl;
    }
}