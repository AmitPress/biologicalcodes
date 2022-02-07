#include<iostream>
using namespace std;
// typedef int* ptr
int main(){
    // pointer :- a variable that stores another variable's memory address
    int num = 45; // stack
    int* ptr1 = &num; // name = ptr, value = 45, address = 0x7ffdef4c6674
    int** ptr2 = &ptr1; // 

    cout<<**ptr2;

}