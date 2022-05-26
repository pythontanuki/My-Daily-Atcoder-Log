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
    int n;
    cin >> n;
    vector<vector<int>> up(n+1);
    for(int i = 2; i <= n; ++i){
        int a;
        cin >> a;
        up[i].push_back(a);
    }
    vector<int> cnt(n+1);
    for(int i = 2; i <= n; ++i){
        for(int down : up[i]){
            cnt[down]++;
        }
    }
    for(int i = 1; i <= n; ++i) cout << cnt[i] << endl;
}