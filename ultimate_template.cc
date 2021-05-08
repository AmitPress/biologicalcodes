#include<bits/stdc++.h>
using namespace std;

/* ====== Ultimate Short Hands ======== */

//fastio
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//numbers
#define MOD                 1000000007
#define MOD1                998244353
#define INF                 1e18
#define infinity            (1<<28)
#define PI                  2*acos(0.0)
#define POPCOUNT            __builtin_popcountll
#define RIGHTMOST           __builtin_ctzll
#define EPS                 10E-10

// variables
#define ll                  long long
#define ull                 unsigned long long
#define pii                 pair<int,int>
#define pll                 pair<long long, long long>
#define dbl                 double
#define vi32                vector<int>
#define vi64                vector<long long>

//actions
#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define ppf                 pop_front
#define ff                  first
#define ss                  second
#define sz(x)               ((int)(x).size())

//loops
#define loop0(i,n)          for(int i = 0; i < n; i++)
#define loop1(i,n)          for(int i = 1; i <= n; i++)
#define repeat(n)           for(int i = 1; i <= n; i++)






/* ==========END=============*/

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

int32_t main(){
#ifdef amit
    freopen("inputf","r",stdin);
    freopen("outputf","w",stdout);
    freopen("errf","w",stderr);
#endif

    // int i = 200;
    // dbg(i);
    // endlr;
    // ll l = 9223372036854775807;
    // dbg(l);
    // endlr;
    // vector<int> v = {1, 2, 3};
    // dbg(v);
    // endlr;
    // vector<ll> v1 = {9223372036854775807, 2, 3};
    // dbg(v1);
    // endlr;
    // vector<string> v2 = {"hi", "hello"};
    // dbg(v2);
    // endlr;
    // char c = 'c';
    // dbg(c);
    // endlr;
    // pair<int,int> p = {4, 2};
    // dbg(p);
    // endlr;
    // pair<int,string> p1 = {4, "Shara"};
    // dbg(p1);
    // endlr;
    // map<int, int> mp;
    // mp.insert(pair<int, int>(1, 40));
    // mp.insert(pair<int, int>(2, 40));
    // dbg(mp);
    // endlr;
    // cout<<"hi";
    // endln;
    // DBG;
    repeat(5){
        cout<<"I love you";
        endln;
    }
    return 0;
}