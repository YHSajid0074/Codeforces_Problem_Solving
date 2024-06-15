#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        set<char>k;
        double count=0;
        string s;
        cin>>s;

        for(char c:s){

k.insert(c);

        }

      count=k.size();

        double sj=count/3.0;
        int sjk=count/3.0;
        

        
            sjk=sjk+1;
        
arr[i]=sjk;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
