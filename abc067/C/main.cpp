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
    vector<ll> a(n);
    ll front = 0;
    ll back = 0;
    rep(i, n-1){
        cin >> a[i];
        front += a[i];
    }
    
    cin >> a[n-1];
    back += a[n-1];

    ll ans = abs(front - back);
    
    for(int i = n - 2; i > 0; --i){
        front -= a[i];
        back += a[i];
        ans = min(ans,abs(front - back));
    }
    cout << ans << endl;
    return 0;
}