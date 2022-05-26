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
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<vector<int>> ab(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        -- a;
        -- b;
        ab[a].push_back(b);
        ab[b].push_back(a);
    }
    int ans = 0;
    rep(i,n){
        bool fl = false;
        for(int v : ab[i]){
            if(h[i] <= h[v]) fl = true;
        }
        if(!fl) ans++;
    }
    cout << ans << endl;
}