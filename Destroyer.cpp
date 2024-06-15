#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[n];
vector<int>akm;
    for(int i=0;i<n;i++){
        int m;
        int slr=0;
        cin>>m;
        int count=1;
        int ar[m];
        vector<int>v1;
        for(int i=0;i<m;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n-1;i++){
       if(ar[i]==ar[i+1]){
        count++;
       }else{
v1.push_back(count);
count=1;
       }
        }
        for(int i=1;i<v1.size();i++){
        if(v1[i-1]<v1[i]){
slr=1;
break;
        }
    }
    akm.push_back(slr);
    }

    for(int i=0;i<akm.size();i++){
        if(akm[i]==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    
}