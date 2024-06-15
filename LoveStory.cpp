#include<iostream>
using namespace std;
int main(){
    string c="codeforces";
    int n;
    cin>>n;
    string arr [n];
    int ar[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        string fk=arr[i];
        for(int j=0;j<10;j++){
            if(fk[j]!=c[j]){
                count++;

            }
        }
        ar[i]=count;
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
}