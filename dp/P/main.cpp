#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define rep(i,n) for(int i = 0; i < (n); ++i)
# define ALL(obj) (obj).begin(), (obj).end()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int INF = 1 << 30;

ll dp[110000][2]; // dp[v][c]　頂点vを根とする部分木を塗るとき、頂点vをc色に塗る場合の数
vector<int> edge[110000];

void dfs(int now, int last){
    dp[now][0] = 1; dp[now][1] = 1;
    for(auto u : edge[now]){
        if(u == last) continue;
        dfs(u,now);
        dp[now][0] = dp[now][0] * ((dp[u][0] + dp[u][1]) % MOD) % MOD;
        dp[now][1] = dp[now][1] * dp[u][0] % MOD;
    }
}


int main(void){
    FAST;   
    int n;
    cin >> n;
    rep(i, n - 1){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    dfs(0, -1);
    cout << (dp[0][0] + dp[0][1]) % MOD << endl;
    return 0;
}