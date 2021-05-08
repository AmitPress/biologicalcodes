#include<iostream>
using namespace std;
int32_t main(){
#ifdef amit
    freopen("inputf","r",stdin);
    freopen("outputf","w",stdout);
#endif

    cout<<"rUNNING";
    int y,z;
    cin>>y>>z;
    int x = y/z;
    cout<<x;
    return 12;
}