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
    int n,k;
    cin >> n >> k;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    sort(h.begin(),h.end());
    int l = 0;
    int r = k - 1;
    ll sma = h[l];
    ll big = h[r];
    ll ans = big - sma;
    
    while(r < n){
        sma = h[l];
        big = h[r];
        l++;
        r++;
        ans = min(ans, (big - sma));
    }
    cout << ans << endl;
}