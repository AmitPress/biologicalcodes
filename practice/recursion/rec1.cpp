#include<iostream>
using namespace std;
// iterative factorial
// int fact(int n){
//     int ret = 1;
//     while(n){
//         ret *= n--;
//     }
//     return ret;
// }
// recursive factorial

int fact(int n){ // 5! = 5*4*3*2*1 == 5*4! == 5*4*3! == 5*4*3*2*1*0!*1
    if(n == 0) return 1;
    return n*fact(n-1);
}


int main(){
    // a function calling itself
    cout<<fact(18);
}