#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>a;

    for(int i=0;i<n;i++){
        int f;
        cin>>f;
        a.insert(f);
    }
    int m=(a.size()/2);
    if(n==1){
        cout<<*a.begin();
    }else{
        auto it=a.begin();
        for(int i=0;i<m;i++){
            ++it;
        }

        cout<<*it;
    }

}