#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i;
    for( i=0; ;i++){
        if(a>b){
            break;
        }
        a=a*3;
        b=b*2;
    }
    cout<<i;
}