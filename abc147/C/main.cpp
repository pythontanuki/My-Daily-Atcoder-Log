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
    int n;
    cin >> n;
    vector<vector<int>> honest(n);
    vector<vector<int>> unkind(n);

    rep(i, n){
        int a;
        cin >> a;
        rep(j, a){
            int x, y;
            cin >> x >> y;
            x--;
            if(y == 0) unkind[i].push_back(x); //証言者iがxを嘘つきと発言した
            else honest[i].push_back(x);//証言者iがxを正直者であると発言した
        }
    }
    int ans = 0;
    //bit全探索
    //各証言者が正直者か嘘つきであるかをbit列でもつ
    for(int i = 0; i < (1 << n); ++i){
        int cnt = 0;
        bool ok = true;
        for(int j = 0; j < n; ++j){
            if((i >> j) & 1){
                cnt++;
                for(int v : unkind[j]) if((i >> v) & 1) ok = false;
                for(int u : honest[j]) if(!((i >> u) & 1)) ok = false;
            }
        }
        if(ok) chmax(ans, cnt);
    }
    cout << ans << endl;
}