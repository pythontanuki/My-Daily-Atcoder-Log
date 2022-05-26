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
    vector<int> a(n+2);
    a[0] = 0;
    for(int i = 1; i < n + 1;++i) cin >> a[i];
    a[n+1] = 0;
    int score = 0;
    
    rep(i,n + 1){
        score += abs(a[i + 1] - a[i]);
    }

    int ans = score;
    for(int i = 1; i < n + 1; ++i){
        //消した頂点が有していた2つのコストを削除する
        score -= (abs(a[i] - a[i - 1]));
        score -= (abs(a[i + 1] - a[i]));
        score += (abs(a[i + 1] - a[i - 1]));
        cout << score << endl;
        score = ans;
    }
    return 0;
}