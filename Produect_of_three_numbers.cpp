#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
       int f;
       cin>>f;
       a.push_back(f);
    }
   for(int i=0;i<n;i++) {
    int fk=0;
    for(int i1=2;i1<100;i1++){
    
        for(int j=i1+1;j<1000;j++){
            
                int k=a[i]/(i1*j);
                if(k>j && (i1*j*k)==a[i]){
                    
                    cout<<"YES"<<endl;
                    cout<<i1<<" "<<j<<" "<<k<<endl;
                    fk=1;
                    break;
                }
           
        }
        if(fk==1){
            break;
        }
        
    }
    if(fk==0){
            cout<<"NO"<<endl;
        }
   }
}