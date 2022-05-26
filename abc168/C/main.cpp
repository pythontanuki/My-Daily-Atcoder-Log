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
const double PI = 3.14159265358979;

int main(void){
    FAST;
    double a,b,h,m;
    cin >> a >> b >> h >> m;
    double sh = (m + (double)60 * h) * 0.5; 
    double lo = m * 6.0;
    double dif = abs(sh - lo);
    double dif_deg = dif / (double)180 * PI;
    double ans = sqrt((b * sin(dif_deg) * (b * sin(dif_deg)) + (b * cos(dif_deg) - a) * (b * cos(dif_deg) - a)));
    printf("%.15lf\n", ans);
}