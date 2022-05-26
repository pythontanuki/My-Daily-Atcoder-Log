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
    int n,m;
    cin >> n;
    vector<string> blue(n);
    map<string,int> mp_bl;
    map<string,int> mp_re;

    rep(i,n){
        cin >> blue[i];
        mp_bl[blue[i]]++;
    }

    cin >> m;
     vector<string> red(m);
    rep(i,m){
        cin >> red[i];
        mp_re[red[i]]++;
    }
    int ans = 0;
    for(auto itr = mp_bl.begin();itr != mp_bl.end();itr++){
        auto x = *itr;
        //ans = max(ans,x.second);
        chmax(ans,x.second-mp_re[x.first]);
    }
    cout << ans << endl;
}