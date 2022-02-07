#include<bits/stdc++.h>
using namespace std;

int main(){
    int given_array[] = { -45, -20, 20, 45, 48, 41 }; // 32 bit integer
    // find largest
    /* info */
    int size = sizeof(given_array)/sizeof(given_array[0]); // 5
    // find second largest
    int large = -9999;
    int secondlarge = -999;
    for(int i=0; i<size; i++){
        if(large < given_array[i]){
            secondlarge = large;
            large = given_array[i];
        }

    }
    
    cout<<secondlarge<<endl;
}