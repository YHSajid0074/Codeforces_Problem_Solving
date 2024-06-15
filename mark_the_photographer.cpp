#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cin>>m;
    
    int arr[m];
    for(int j=0;j<m;j++){
    int n,x1;
    cin>>n>>x1;
    
    vector<int>a;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
int f;
    for(int i=0;i<n;i++){
        
        if(a[i]<=(a[i+n]-x1)){
            f=1;
            
        }else{
            f=0;
            break;

        }
       
    }
 arr[j]=f;
    
    }

    for(int i=0;i<m;i++){
        if(arr[i]==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}
