#include<iostream>
using namespace std;

int main(){
    string s; cin>>s;
    // snail techinique by amit
    int count = 1, ans = 1;
    for(int i=1; i<s.size(); ++i){
        if(s[i-1] == s[i]){
            count++;
        }else{
            count = 1;
        }
        ans = max(count, ans);
    }
    cout<<ans;
}