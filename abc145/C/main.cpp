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
    vector<int> x(n);  
    vector<int> y(n);
    rep(i, n){
        cin >> x[i] >> y[i];
    }  
    vector<int> nums;
    rep(i, n) nums.push_back(i);

    double total = 0;
    double cnt = 1;
    for(double i = 1; i<= n; ++i) cnt *= i;  
    do{
        double pre = 0;
        rep(i, n - 1){
            pre += sqrt((x[nums[i+1]] - x[nums[i]]) * (x[nums[i+1]] - x[nums[i]]) + (y[nums[i+1]] - y[nums[i]]) * (y[nums[i+1]] - y[nums[i]]));
        }
        total += pre;
    }while(next_permutation(nums.begin(),nums.end()));
    double ans = total / cnt;
    printf("%.15lf\n", ans);
}