#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>a1;
      int a;
        cin>>a;
    for(int i=0;i<a;i++){
      int f;
      cin>>f;

        a1.insert(f);
        
    }
    int b;
        cin>>b;
     for(int i=0;i<b;i++){
      int f1;
      cin>>f1;
        a1.insert(f1);
    }
int count=0;
    for(int i=1;i<=n;i++){
    for(auto fk: a1){
        if(i==fk){
            count++;
            break;
        }
    }
    }
    if(count==n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
}