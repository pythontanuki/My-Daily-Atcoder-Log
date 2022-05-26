#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define rep(i,n) for(int i = 0; i < (n); ++i)
# define ALL(obj) (obj).begin(), (obj).end()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int INF = 1 << 30;

int main(void){
    FAST;
    int n;
    cin >> n;
    set<ll> st;
    map<ll, int> mp;
    rep(i, n){
        ll a;
        cin >> a;
        st.insert(a);
        mp[a]++;
    }
    
    ll ans = 0;
    for(ll v : st){
        if(mp[v] % 2 == 0 && mp[v] > 1) continue;
        ans++;
    }
    cout << ans << endl;
}