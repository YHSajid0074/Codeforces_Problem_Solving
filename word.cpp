#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int count1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&& s[i]<='z'){
            count++;
        }else{
            count1++;
        }
    }
    if (count >= count1) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {  
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s;
}