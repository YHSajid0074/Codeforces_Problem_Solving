#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
int af[n];
    for(int j=0;j<n;j++){
        int x,y;
        int f;
        cin>>f;
        int s,e;

        vector<pair<int,int> >v;
        for(int i=0;i<f;i++){
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
    vector<int>v1;
        for(int i=0;i<f;i++){
            if(v[i].first==1){
           s=v[i].second;
            }else if(v[i].first==2){
           e=v[i].second;
            }
          else  if(v[i].first==3){
         v1.push_back(v[i].second);
            }
        }
int count = 0;
for (int i = s; i <= e; i++) {
    bool found = false;
    for (int k = 0; k < v1.size(); k++) {
        if (i == v1[k]) {
            found = true;
            break;
        }
    }
    if (!found) {
        count++;
    }
}

af[j]=count;
    }


 for(int i=0;i<n;i++){
       cout<<af[i]<<endl;
    }
}