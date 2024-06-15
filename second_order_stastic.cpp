#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
set<int>k;
    for(int i=0;i<n;i++){
        int f;
        cin>>f;
        k.insert(f);
    }
set<int>::iterator it = next(k.begin(), 1);
 if(k.size()<2){
    set<int>::iterator it1 = k.begin();
    cout<<"NO";
 }else{
 cout<<*it;
 }
}