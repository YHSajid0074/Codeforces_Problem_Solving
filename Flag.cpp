#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr[i][j];
        }
    }
int l=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==arr[i-1][j] ){
                l=1;   
                break;
            }
        }
    }
  for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]!=arr[i][j-1] ){
                l=1;   
                
            }
    }


  }
    if(l==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}