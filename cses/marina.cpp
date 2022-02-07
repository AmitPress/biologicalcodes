#include<iostream>
#include<sstream>
using namespace std;

int main(){
    // mod plus
    int n,t;cin>>n>>t;
    string s1, s2;cin>>s1>>s2;
    if(!t){
        cout<<"-1";
        return 0;
    }
    stringstream out;
    bool toggle = true;
    int i = 0, j = 0;
    while(i < n && j < n){ // i = 1 j = 1 t = 0 n = 2
        if(t){
            if(s1[i] != s2[j]){
                if(toggle){
                    out<<s1[i];
                    ++i; ++j;
                    toggle = false;
                }else{
                    out<<s2[i];
                    ++i; ++j;
                    toggle = true;
                }
            }else{
                out<<char(s1[i]+1); // b
                ++i; ++j;
                --t;
                toggle = true;
            }
        }else{
            break;
        }
    }
    cout<<out.str();
}