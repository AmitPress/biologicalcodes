#include<bits/stdc++.h>

using namespace std;
#define vi32 vector<int>
#define pb push_back


/* -------- Ultimate Template for Debuggging ---------- */

#define endlr cerr<<endl
#define endln cout<<endl
#define DBG cerr<<"Seen"<<endl
template<typename T> void dbg_print(T x) { cerr<<x; }
template <class T, class V> void dbg_print(pair <T, V> p) {cerr << "{"; dbg_print(p.first); cerr << ","; dbg_print(p.second); cerr << "}";}
template<typename T> void dbg_print(vector<T> v){ cerr<<"[ "; for(T x : v) cerr<<x<<" "; cerr<<"]";}
template<typename T, typename S> void dbg_print(map<T, S> v){ cerr<<"[ "; for(auto x : v) dbg_print(x); cerr<<" ]"; }

/* ----------- -Damit ------------*/
#ifdef amit
#define dbg(x) cerr<<#x<<" => ", dbg_print(x);
#else
#define dbg(x)
#endif

/* ---------    DEBUG END      ------------  */



// bitwise operation (OR)
/*
    1 | 1 = 1
    1 | 0 = 1
    0 | 1 = 1
    0 | 0 = 0
*/
int32_t main(){
    #ifdef amit
        freopen("inputf", "r", stdin);
        freopen("outputf", "w", stdout);
    #endif
    int x = 23, y = 46;
    /*
        46 = 1 0 1 1 1 0
        23 = 0 1 0 1 1 1
        ----------------
             1 1 1 1 1 1
             
            32 16 8 4 2 1 = 63
    */
    int z = x | y;
    cout<<z; // output = 63
    return 0;
}