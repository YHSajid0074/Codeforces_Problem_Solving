#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int a=0,b=0,c=0,d=0;
cin.ignore();
    for(int i=0;i<n;i++){
        
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin.ignore();
        if((((a>c) && (a>d)) &&(( b>c )&& (b>d )))||( ((a<c )&& (a<d)) && ((b<c) && (b<d))) ){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<endl;
    }
}