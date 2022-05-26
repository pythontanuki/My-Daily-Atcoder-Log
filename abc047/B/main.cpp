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
    int w,h,n;
    cin >> w >> h >> n;
    vector<vector<bool>> xy(h,vector<bool>(w,false));
    rep(i, n){
        int x,y,a;
        cin >> x >> y >> a;
        if(a == 1){
            rep(j, h){
                rep(k, x){
                    xy[j][k] = true;
                }
            }
        }
        else if(a == 2){
            rep(j,h){
                for(int k = x; k < w; ++k){
                    xy[j][k] = true;
                }
            }
        }

        else if(a == 3){
            rep(j, w){
                rep(k, y){
                    xy[k][j] = true;
                }
            }
        }
        else{
            rep(j, w){
                for(int k = y; k < h; ++k){
                    xy[k][j] = true;
                }
            }
        }
    }
    int ans = 0;
    rep(i, h){
        rep(j, w){
            if(!xy[i][j]) ans++;
        }
    }
    cout << ans << endl;
}