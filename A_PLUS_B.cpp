#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        char a=s[0]-'0';
        char b=s[2]-'0';
        int c=(int)a+(int)b;

        arr[i]=c;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}