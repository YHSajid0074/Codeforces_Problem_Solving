#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fkr[n];
    for(int iy=0;iy<n;iy++){
        int x,y;
        cin>>x>>y;
       int arr[x];
      int  ar[y];
        
vector<int>abc;
        for(int i=0;i<x;i++){
           int fk;
           cin>>fk;
            
            abc.push_back(fk);
        }
        
        for(int i=0;i<y;i++){
            int fk;
            cin>>fk;
            abc.push_back(fk);
        }

        sort(abc.begin(),abc.end(),greater<int>());

        for(int i=0;i<x;i++){
            arr[i]=abc[i];
        }
         sort(abc.begin(),abc.end());

for(int i=0;i<x;i++){
            ar[i]=abc[i];
        }
        int sum=0;
        for(int i=0;i<x;i++){
            sum=sum+(arr[i]-ar[i]);
        }
fkr[iy]=sum;
    }

    for(int i=0;i<n;i++){
        cout<<fkr[i]<<endl;
    }
}