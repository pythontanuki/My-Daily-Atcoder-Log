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

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> p, long long Q, std::vector<long long> a, std::vector<long long> b){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> p(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &p[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(Q);
    std::vector<long long> b(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    solve(N, std::move(p), Q, std::move(a), std::move(b));
    return 0;
}
