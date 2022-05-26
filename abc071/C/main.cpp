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
    vector<ll> vec;
    map<ll, int> mp;
    rep(i, n){
        int a;
        cin >> a;
        vec.push_back(a);
        mp[a]++;
    }
    set<ll> st;
    for(ll u : vec){
        if(mp[u] >= 2) st.insert(u);
    }
    if(st.size() == 0){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> c;
    for(ll k : st){
        c.push_back(k);
        if(mp[k] >= 4) c.push_back(k);
    }

    sort(c.begin(),c.end());

    ll ans = 1;
    auto itr = c.rbegin();
    rep(i,2){
        ans *= (*itr);
        itr++;
    }
    cout << ans << endl;
    return 0;
}