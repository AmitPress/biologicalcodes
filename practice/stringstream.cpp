#include<iostream>
#include<sstream>
using namespace std;

int main(){
    stringstream ss;
    ss<<"hi"<<"brohter\n"<<"good day!";
    cout<<ss.str();
}