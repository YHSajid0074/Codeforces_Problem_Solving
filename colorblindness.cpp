#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        string s1;
        string s2;
        int a;
        cin>>a;
        cin>>s1>>s2;
        int kf;
        for(int j=0;j<a;j++){
if(s1[j]=='B'){
    s1[j]='G';
}
if(s2[j]=='B'){
    s2[j]='G';
}
        }

for(int j=0;j<a;j++){
    kf=0;
    if(s1[j]!=s2[j]){
        kf=1;
        break;
    }
}



        arr[i]=kf;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}