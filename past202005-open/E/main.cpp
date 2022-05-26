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
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> g(n);
    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    } 
    vector<int> c(n);

    rep(i,n) cin >> c[i];
    rep(i,q){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            x--;
            //solve
            cout << c[x] << endl;
            for(int v : g[x]){
                c[v] = c[x];
            }
    
        }
        else{
            int x,y;
            cin >> x >> y;
            x--;
            //solve
            cout << c[x] << endl;
            c[x] = y;
        }
    }
} 