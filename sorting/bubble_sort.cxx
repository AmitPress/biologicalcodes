#include<cstdio>
#include<algorithm>
using namespace std;

int* bubble_sort(int* ar){
    // int size = sizeof(ar)/sizeof(int);
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(ar[j+1]>ar[j]){
                swap(ar[i], ar[j]);
            }
        }
    }
    return ar;
}

int main(){
    int arr[] = {3, -1, 4, -1, 5, 9};
    // int sz = sizeof(arr)/sizeof(int);
    int* arx = bubble_sort(arr);
    for(int i=0; i<6; i++){
        printf("%d\n",arx[i]);
    }
}