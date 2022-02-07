#include<iostream>
#include<set>
#include<iterator>
using namespace std;

void set_union(set<int> s1, set<int> s2, set<int>& res){
    auto it1 = s1.begin();
    auto it2 = s2.begin();
    while(it1 != s1.end() && it2 != s2.end()){
        if(*it1<*it2){
            res.insert(*it1);
            ++it1;
        }else if(*it1>*it2){
            res.insert(*it2);
            ++it2;
        }else{
            res.insert(*it2);
            ++it2;
            ++it1;
        }
    }
    while(it1 != s1.end()){
        res.insert(*it1);
        ++it1;
    }
    while(it2 != s2.end()){
        res.insert(*it2);
        ++it2;
    }
}

int main(){
    set<int> s1 = {1, 2, 2, 3, -1}; // -1 1 2 3
    set<int> s2 = {4, -1, -1, 0}; // 0 -1 4
    set<int> un;
    set_union(s1, s2, un);
    for(auto x: un){
        cout<<x<<" ";
    }
}