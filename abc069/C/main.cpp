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
    int four_cnt = 0;
    int two_cnt = 0;
    int odd_cnt = 0;
    rep(i, n){
        int a;
        cin >> a;
        if(a % 2 == 1) odd_cnt++;
        else if(a % 4 == 0)four_cnt++;
        else two_cnt++;
    }
    if(two_cnt == 0 && (odd_cnt <= four_cnt + 1)){
        cout << "Yes" << endl;
        return 0;
    }
    else if(two_cnt != 0 && (odd_cnt <= four_cnt)){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}