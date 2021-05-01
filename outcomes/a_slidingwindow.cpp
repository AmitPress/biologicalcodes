#include<bits/stdc++.h>

using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    
    string arr = "ABCDEFGHIJKLMNO";
    int k = 3;

    for(int i=0; i<arr.size()-(k-1); ++i){ // minus works left to right
        string s = "";
        for(int j = i; j<i+k; ++j){
            s += arr[j];
        }
        cout<<s<<endl;
    }

}