#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      cin>>ar[i];
    }
    int ck=0;
int count=0;
int cf=0;
   
    for(int i=0;i<n;i++){
        if(arr[i]!=ar[i]){
count++;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j] && arr[i]==ar[i]){
                ck++;
            }if((arr[i]==arr[j] || arr[i]>arr[j]) && arr[i]==ar[i]){
                cf=1;
                }
        }
    }
    
   if(count>0){
    cout<<"rated";
   } else if(ck>0){
    cout<<"unrated";
   }else if(cf>0){
    cout<<"maybe";
   }
}