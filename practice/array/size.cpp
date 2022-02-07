#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int arr[] = {1, 2, 3};
    // memset(arr, 0, sizeof(arr));
    int* it = arr;
    int sz = (int)sizeof(arr)/sizeof(int);
    while(sz--){
        cout<<*it<<endl;
        ++it;
    }
}