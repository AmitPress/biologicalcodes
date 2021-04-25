#include<bits/stdc++.h>

#include "recallbook.h"

using namespace std;

void up(int x){
    static int val;
    if(x == 0) return;

    up(--x);
    cout<<x;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    up(9);

}