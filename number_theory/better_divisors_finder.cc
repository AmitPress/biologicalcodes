#include<bits/stdc++.h>

using namespace std;
#define vi32 vector<int>
#define pb push_back
// divisors finder ( optimized )

void get_divisors(vi32& v, int target){
    for(int i=1; i*i<=target; ++i){
        if(target % i == 0){
            if(target/i == i){
                v.pb(i);
            }else{
                v.pb(i);
                v.pb(target/i);
            }
        }
    }
}


int32_t main(){
    #ifdef amit
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    vi32 v;
    get_divisors(v, 100);
    for(auto& i : v) cout<<i<<" ";
    return 0;
}