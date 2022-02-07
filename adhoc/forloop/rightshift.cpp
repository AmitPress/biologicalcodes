#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // using bubbling
    for(int i=size-1; i>0; --i){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    for(int i=0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}