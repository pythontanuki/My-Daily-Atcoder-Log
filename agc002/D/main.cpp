#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, long long Q, std::vector<long long> x, std::vector<long long> y, std::vector<long long> z){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    std::vector<long long> z(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
        std::scanf("%lld", &z[i]);
    }
    solve(N, M, std::move(a), std::move(b), Q, std::move(x), std::move(y), std::move(z));
    return 0;
}
