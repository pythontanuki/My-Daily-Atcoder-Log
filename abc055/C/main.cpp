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
    ll n,m;
    cin >> n >> m;
    ll m2 = m / 2;
    ll ans = 0;
    if(n >= m2){
        cout << m2 << endl;
        return 0;
    }
    else{
        ans += n;
        ans +=((m2-n) * 2 / 4);
    }
    cout << ans << endl;
    return 0;
}