#include<bits/stdc++.h>

using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif

    int arr[] = {22, 55, 121, 222};

    int max = -999; // always use minus infinity , lets say inf=-999 in this case, for max , dont use anything from the array itself

    for(int i=0; i < 4; ++i){
        if ( arr[i] > max) max = arr[i];
    }
    int second_max= -999;
    for(int i=0; i < 4; ++i){
        if (arr[i] != max){
            if ( arr[i] > second_max) second_max = arr[i]; // if i use secondmax = arr[0] will cause problem
        }
    }
    cout<<second_max;
    
}