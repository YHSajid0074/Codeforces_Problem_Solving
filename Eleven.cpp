#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c;
int n;
cin>>n;
vector<int>a1;
    for(int i=0;i<n;i++){
         c=a+b;
        a=b;
        b=c;
         a1.push_back(c);
    }
   
for(int i=1;i<=n;i++){
    int ca=0;
  for(int j=0;j<n;j++){
 if(i==a1[j]){
    ca=1;
    break;
 }
  }
  if(ca==1){
    cout<<'O';
  }else{
    cout<<'o';
  }
}
    }
