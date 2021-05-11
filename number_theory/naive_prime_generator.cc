#include<bits/stdc++.h>

using namespace std;
#define vi32 vector<int>
// primality test
bool isPrime(int n){
    bool res = true;
    if(n == 1 || n == 0) res = false;
    if( n < 0 ) res = false;
    for(int i=2; i*i<=n; i++){
        if(n % i == 0) res = false;
    }
    return res;
}

void generatePrimes(vi32& v, int n){
    for(int i = 3 ; i <= n ; i++){
        if(isPrime(i)){
            v.push_back(i);
        }
    }
}

int32_t main(){
    #ifdef amit
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    vi32 v;
    generatePrimes(v,50);
    for(auto& i : v) cout<<i<<endl;
    return 0;
}