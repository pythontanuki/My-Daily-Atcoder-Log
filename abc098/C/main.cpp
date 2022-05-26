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
    string s;
    cin >> s;
    //自分のスコアに影響を与えたかどうかを確認するフラグを持つ
    bool flag = false;
    int score = 0;
    //次にターゲットになる人物が今見ている人物のスコアに影響を与えたのかを確認する
    if(s[1] == 'E') flag = true;
     //一番最初のスコアを計算する
    for(int i = 1; i < n; ++i){
        if(s[i] == 'E') score++;
    }
    int ans = score;
    //自分の前後だけを見てスコアを更新する
    int now = 1;
    while(now < n){
        if(flag) score--;
        if(s[now+1] == 'E') flag = true;
        else if(s[now+1] == 'W') flag = false;
        if(s[now-1] == 'W') score++;
        ans = min(ans,score);
        now++;
    }
    cout << ans << endl;
    return 0;
}