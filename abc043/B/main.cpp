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
    string s;
    cin >> s;
    int n = s.size();
    deque<int> d;
    rep(i, n){
        if(s[i] == '0') d.push_back(0);
        else if(s[i] == '1') d.push_back(1);
        else if(s[i] == 'B' && d.size() > 0) d.pop_back();
    }
    int k = d.size();
    rep(i, k) cout << d[i];
    cout << endl;
    return 0;   
}