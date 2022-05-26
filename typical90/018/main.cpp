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
#define PI acos(-1)

double t,l,x,y;
int q;

double f (double e){
    double dx = 0;
    double dy = - (l / 2) * sin(e / t * 2 * PI);
    double dz = (l / 2) - (l / 2.0) * cos(e / t * 2 * PI);
    double dist = sqrt((dx - x) * (dx - x) + (dy - y) * (dy - y));//直大と自分の水平距離
    double ans = atan(dz / dist);
    return ans * (double)180 / PI;
}

int main(void){
    FAST;
    cin >> t;
    cin >> l >> x >> y;
    cin >> q;
    rep(i, q){
        double e;
        cin >> e;
        printf("%.15f\n",f(e));
    }    
    return 0;
}