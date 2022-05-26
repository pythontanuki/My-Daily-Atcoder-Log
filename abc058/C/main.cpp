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

int C[50][26];

int main(){
    int n;
    cin >> n;
    rep(i, n){
        string s;
        cin >> s;
        for(char c : s) C[i][c - 'a']++;
    }
    string ans = "";
    rep(i, 26){
        int mi = INF;
        rep(j, n){
            mi = min(mi, C[j][i]);
        }
        rep(j, mi) ans += ('a' + i);
    }
    cout << ans << endl;
}