#include<iostream>
#include<set>
using namespace std;
// union of two sets
void arr_union(int a1[], int a2[], int sz1, int sz2, set<int>& res){
    int i = 0;
    int j = 0;
    while(i < sz1 && j <sz2){
        if(a1[i]<a2[j]){
            res.insert(a1[i]);
            i++;
        }else if(a1[i]>a2[j]){
            res.insert(a2[j]);
            j++;
        }else{
            res.insert(a1[i]);
            i++;
            j++;
        }
    }
    // i still does not hit the last element
    while(i < sz1){
        res.insert(a1[i]);
        i++;
    }
    // j still does not hit the last element
    while(j < sz2){
        res.insert(a2[j]);
        j++;
    }
}
int main(){
    // lets consider array to be a set where there cannot be duplicate values
    // int arr1[] = {1, 4, -4, -4, 3, 8, 3};
    int arr1[] = {1, 4, -4, 8, 3}; // -4 1 3 4 8
    int arr2[] = {4, -4, -3, 2, 1}; // -4 -3 1 2 4
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    set<int> unn; // -4 -3 1 2 3 4 8
    arr_union(arr1, arr2, m, n, unn);
    for(auto n: unn){
        cout<<n<<" ";
    }
}