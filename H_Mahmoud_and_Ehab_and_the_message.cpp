#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include  <unordered_map>
#include  <unordered_set>
#include <cmath>
#include <algorithm>
#include <deque>
#include <queue>

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(vec) vec.begin(),vec.end()
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO";
#define yes cout << "YES";

#define dd                      \
    int n;                      \
    cin >> n;                   \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

void ATWAA()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

int main()
{

    ios;
   ll n,k,m; cin>>n>>k>>m;
    map<string,int>mp;
    vector<string>v(n);
    rep(i,n)cin>>v[i];
    rep(i,n){
        ll x; cin>>x;
        mp[v[i]]=x;
    }
    while(k--){
        ll n; cin>>n;
        vector<int>c;
        int mn=INT_MAX;
        rep(i,n){
           ll x; cin>>x;
           mn=min(mn,mp[v[x-1]]);
           c.push_back(x);
        }

        rep(i,n){
           mp[v[c[i]-1]]=mn;
        }
    }
    ll ans=0;
    rep(i,m){
       string s; cin>>s;
       ans+=mp[s];
    }
    cout<<ans;
}
