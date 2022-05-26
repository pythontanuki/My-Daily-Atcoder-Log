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

int c[3][3];

int main(void){
    FAST;
    rep(i, 3){
        rep(j, 3){
            cin >> c[i][j];
        }
    }
    bool fl = false;
    rep(i, 3){
        rep(j, 3){
            if((c[0][0] - c[0][1]) == (c[1][0] - c[1][1]) && (c[1][0] - c[1][1]) == (c[2][0] - c[2][1])){
                if((c[0][0] - c[0][2]) == (c[1][0] - c[1][2]) && (c[1][0] - c[1][2]) == (c[2][0] - c[2][2])){
                    if((c[0][1] - c[0][2]) == (c[1][1] - c[1][2]) && (c[1][1] - c[1][2]) == (c[2][1] - c[2][2])){
                        fl = true;
                    }
                }
            }
        }
    }
    if(fl) printf("Yes\n");
    else printf("No\n");
    return 0;
}