#include<bits/stdc++.h>

#include "recallbook.h"

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif

    vector<float> v1 = rb::getVec<float>();
    vector<float> v2 = rb::getVec<float>();
    vector<float> v3 = rb::getVec<float>();

    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
    for(auto x:v2) cout<<x<<" ";
    cout<<endl;
    for(auto x:v3) cout<<x<<" ";
    cout<<endl;

}