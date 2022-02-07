#include<iostream>
#include<cstring>
using namespace std;
char tolower_case(char c){ // A
    char lo;
    char base_lower = 'a'; // 97
    if(c < base_lower){ 
        lo = base_lower + c - 'A';
    }
    return lo; // a
}
int main(){
    // mutation
    // size
    // intialization
    // builtins
    // ascii codes
    // string s;
    // s = "I am a Engineering student of East West University";
    // for(int i=0; i<s.size(); ++i){
    //     if(s[i]<97){
    //         s[i] = tolower(s[i]);
    //     }
    // }
    // int arr[26];
    // memset(arr, 0, sizeof(arr));
    // for(int i=0; i<s.size(); ++i){
    //     ++arr[s[i]-'a'];
    // }
    // for(int i=0; i<26; ++i){
    //     char a = 'a';
    //     cout<<char(a+i)<<"->"<<arr[i]<<endl;
    // }
    string c = "RAKIB";
    for(int i=0; i<c.size(); ++i)
        c[i] = tolower_case(c[i]);
    cout<<c<<endl;

}