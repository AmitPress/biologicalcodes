#include<bits/stdc++.h>

#include "recallbook.h"

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif

    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        vector<float> v = rb::getVec<float>();
        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
}