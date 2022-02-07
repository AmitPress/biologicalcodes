#include<iostream>
using namespace std;
// pass by value
// pass by reference
void swaps(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int f = 45;
    int s = 54;
    cout<<f<<" "<<s<<endl; // 45 54
    swaps(f,s);
    cout<<f<<" "<<s<<endl; // 54 45
}