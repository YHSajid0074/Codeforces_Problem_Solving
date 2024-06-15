#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int kj=0;kj<n;kj++){
        string s,k;
        int a;
        cin>>a;
        cin>>s>>k;
        
int count=0;
int count1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
count++;
        }
        }
        for(int j=0;j<k.length();j++ ){
            if(k[j]=='1'){
            count1++;
            }
        }
int count3=0;
for(int i=0;i<s.length();i++){
   
        if(count > count1 && s[i]=='1' && s[i]!=k[i]){
            count3++;
        }
        else if(count <= count1 && k[i]=='1' && s[i]!=k[i]){
            count3++;
        }
    
}
arr1[kj]=count3;
    }


    for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }
}