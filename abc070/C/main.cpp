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

ll gcd(ll a, ll b){
    return b ? gcd(b, a % b) : a;
}
 
ll lcm(ll x, ll y){
    return x / gcd(x, y) * y;
}

int main(void){
    FAST;
    int n;
    cin >> n;
    ll ans = 1;

    rep(i, n){
        ll t;
        cin >> t;
        ans = lcm(ans, t);
    }
    cout << ans << endl;
    return 0;
}