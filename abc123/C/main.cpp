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
    ll n,a,b,c,d,e;
    cin >> n >> a >> b >> c >> d >> e;
    //ボトルネック
    //つまる場所は、a~eの最小部分であり、結局全部を最小値流すと考えても変わらない。
    ll min_move = min({a,b,c,d,e});
    ll ans = (n + min_move - 1) / min_move + 4;
    cout << ans << endl;
}