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
    vector<vector<int>> adj(n,vector<int>(n,0));
    rep(i, m){
        int a,b;
        cin >> a >> b;
        --a;--b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    int ans = 0;
    vector<int> nums;
    rep(i, n) nums.push_back(i);
    do{
        if(nums[0] != 0) continue;
        int cnt = 1;
        for(int i = 0; i < n - 1; ++i){
            cnt *= adj[nums[i]][nums[i + 1]];
        }
        ans += cnt;
    }while(next_permutation(nums.begin(),nums.end()));
    cout << ans << endl;
}