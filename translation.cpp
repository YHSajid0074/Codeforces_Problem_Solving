#include<iostream>
using namespace std;
int main(){
    string s,k;
    cin>>s>>k;
    int flag=1;
int n=s.length();
    for(int i=0;i<n;i++){
if(s[i]!= k[n-1-i]){
flag=0;
break;
}
    }
    if(flag==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}