#include<bits/stdc++.h>

using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif

    int arr[] = {-22, -55, -121, -222};

    int max = arr[0];

    for(int i=0; i < 4; ++i){
        if ( arr[i] > max) max = arr[i];
    }
    int second_max=arr[0];
    for(int i=0; i < 4; ++i){
        if (arr[i] != max){
            if ( arr[i] > second_max) second_max = arr[i];
        }
    }
    cout<<second_max;
    
}