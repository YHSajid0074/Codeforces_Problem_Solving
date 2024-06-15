#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        string s;
        int kf;
        cin>>kf;
        cin>>s;
        int count=0;
        string g="Timur";
        for(int i=0;i<5;i++){
            if(s.length() >5 || s.length()<5){
                break;
    
}
            int c=0;
            for(int k=0;k<5;k++){
if(s[i]==g[k]){
    c=1;
    g[k]='1';
    break;
}
            }
            if(c==1){
    count++;
}  
        }

        arr[j]=count;
    }

    for(int i=0;i<n;i++){
        if(arr[i]==5){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }

}