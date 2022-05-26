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

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> sw(m);
    rep(i, m){
        int k ;
        cin >> k;
        rep(j, k){
            int s;
            cin >> s;
            s--;
            sw[i].push_back(s);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];
    int ans = 0;

    //bit全探索
    for(int i = 0; i < (1 << n); ++i){//スイッチのon/offをビット列で管理
        int check = 0;
        for(int j = 0; j < m; ++j){
            int cnt = 0;
            for(int v : sw[j]) if(i & (1 << v)) cnt++; //bit列の桁は、何番目の電球のことを指しているかに対応
            if((cnt % 2) == p[j]) check++;
        }
        if(check == m) ans++;
    }
    cout << ans << endl;
}