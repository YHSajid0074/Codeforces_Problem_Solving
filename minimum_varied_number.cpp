#include<iostream>
#include<set>
using namespace std;
int main(){
int k;
cin>>k;

    for(int j=0;j<k;j++){
    int n;
    cin>>n;
set<int>a;
    for(int i=9;i>0;i--){
        
if((n-i)>=0){
n=n-i;
a.insert(i);
} 

    }
    for(auto &i :a){
    cout<<i;
}
cout<<endl;
    }

    
}