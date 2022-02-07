#include<iostream>
#include<string>
using namespace std;

int main(){
    // DLD -> Finite State Machine(FSM)
    string in = "110101010010101110";
    cout<<in.size();
    bool output = false;
    int idx;
    for(int i=0; i<in.size()-3; ++i){
        if(in[i] == '1'){
            if(in[i+1] == '1'){
                if(in[i+2] == '1'){
                    output = true;
                    idx = i+2;
                }
            }
        }
    }
    cout<<boolalpha<<output<<" at index: "<<idx<<endl;
}