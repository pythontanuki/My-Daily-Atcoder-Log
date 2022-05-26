#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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
using mint = modint998244353;

int main(){
    mint ans = 0;
    int n,m,k,s,t,x;
    cin >> n >> m >> k >> s >> t >> x;
    s--;
    t--;
    x--;
    vector<vector<int>> tree(n);
    rep(i, m){
        int u,v;
        cin >> u >> v;
        --u;
        --v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> nums;
    rep(i, n) nums.push_back(i);
    do{
        if(nums[0] == s && nums[k - 1] == t){
            int cnt = 0;
            rep(i, k - 1){
                bool fl = false;
                if(nums[i] == x) cnt++;
                int v = tree[nums[i]].size();
                rep(j, v){
                    if(tree[nums[i]][j] == nums[i+1]){
                        fl = true;
                        break;
                    }
                }
                if(!fl) break;
            }
            if(cnt % 2 == 0) ans++;
        }
    }while(next_permutation(nums.begin(),nums.end()));
    cout << ans.val() << endl;
}