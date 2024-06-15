#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
int count=1;
    for(int i=1;i<n;i+=1){
        
         
         if(arr[i-1]== 'R'&&arr[i]=='U' || arr[i-1]== 'U'&&arr[i]=='R' ){
            n=n-1;
           
        }
    }
    cout<<n;
}