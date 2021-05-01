#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    int arr[] = {1, 3, 5, 7, 9, 6, 2, 4, 8};
    int size = (int)sizeof(arr)/sizeof(arr[0]);
    vector<int> sum(size+1);
    sum[0] = 0;
    for(int i=1; i<size+1; ++i){
        sum[i] = sum[i-1] + arr[i-1];
    }
    // sum = [0 1 4 9 16 25 31 33 37 45 ]
    // i = 3, i-k = 0
    int k = 3;
    for(int i=k; i<size+1; ++i){
        int sm = sum[i] - sum[i-k];
        cout<<sm<<" ";
    }

}