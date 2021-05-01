#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    int arr[] = {1, 3, 5, 7, 9, 6, 2, 4, 8}; // original size is 9 (index 7)
    int size = (int)sizeof(arr)/sizeof(arr[0]); // size = 9
    vector<int> sum(size+1); // take a extra space to accomodate 0 in the first place
    sum[0] = 0; // here we are accomodating 0 on the first place, why? see #x comment
    for(int i=1; i<size+1; ++i){
        sum[i] = sum[i-1] + arr[i-1]; // basically we are mapping `sum` array to `arr` why? cause the `sum` array size is 1 unit bigger
    }
    // sum = [0 1 4 9 16 25 31 33 37 45 ]
    // i = 3, i-k = 0
    int k = 3;
    for(int i=k; i<size+1; ++i){
        int sm = sum[i] - sum[i-k]; // #x if we dont use 0 in the first place then in a case i-k becomes -1 which is horrible
        cout<<sm<<" ";
    }

}