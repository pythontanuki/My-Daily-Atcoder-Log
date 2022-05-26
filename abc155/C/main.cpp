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
    vector<string> s(n);
    int ma = -1;
    map<string,int> mp;

    rep(i,n){
        cin >> s[i];
        mp[s[i]]++;
        if(ma < mp[s[i]])ma = mp[s[i]];
    }
    vector<string> ans;
    for(auto itr = mp.begin();itr != mp.end();itr++){
        auto x = *itr;
        if(x.second == ma) cout << x.first << endl;
    }
}
    