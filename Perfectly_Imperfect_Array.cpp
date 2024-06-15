#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
int ar[n];
int k;
    for(int i=0;i<n;i++){
         k=0;
        int m;
        cin>>m;
        int arr[m];
for(int j=0;j<m;j++){
cin>>arr[j];
}

for(int j=0;j<m;j++){
    int f=arr[j];
    int jk=sqrt(f);
    if(jk*jk !=f){
  k=1;
 break;
    }


}
ar[i]=k;
    }

    for(int i=0;i<n;i++){
        if(ar[i]==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    }

}