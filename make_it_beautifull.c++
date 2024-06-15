#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int f=0;f<m;f++){
int n;
cin>>n;
        int fk=0;
       
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
for(int i=1;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    if(a[i]<a[j]){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(int i=0;i<n-1;i++){ 
    int sum=0;

    for(int j=0;j<=i;j++){
         sum+=a[j];
    }
 if(sum==a[i+1]){
    fk=1;
    break;
 }
    
}

if(fk==1){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

    }
}