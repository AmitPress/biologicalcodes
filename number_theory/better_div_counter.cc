#include<bits/stdc++.h>

using namespace std;
#define vi32 vector<int>
// divisors count
int div_count(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int count = 0;
    for(int i = 1; i*i <= n ; i++){
        // when i | n counter will increase by 2
        if(i*i == n){
            count ++;
        // when i*i == n (2*2 == 4) count will increase by 1
        }else if(n % i == 0){
            count += 2;
        }
    }
    return count;
}

int32_t main(){
    #ifdef amit
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    int cnt = div_count(36); // answer has to be 6 {1, 2, 4, 5, 10, 20}
    cout<<cnt;
    return 0;
}