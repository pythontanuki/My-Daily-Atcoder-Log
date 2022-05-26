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
    int n,m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i,m)cin >> x[i];
    sort(x.begin(),x.end());
    vector<int> d(m-1);
    rep(i,m-1){
        d[i] = x[i+1] - x[i];
    }
    sort(d.begin(),d.end());
    int ans = 0;
    rep(i,m-n){
        ans += d[i];
    }
    cout << ans << endl;
}