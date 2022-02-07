#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // naive approach
    int first = arr[0];
    for(int i=0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = first;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"-";
    }
}