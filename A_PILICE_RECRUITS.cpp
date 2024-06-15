#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
int max=0;
    for(int i=0;i<n;i++){
          if(arr[i]==-1){
            if(max>0){
                max=max-1;
            }else{
                count++;
            }

        }
       else if(arr[i]>=0){
             max=max+arr[i];
        }

      
    }
    cout<<count;
}