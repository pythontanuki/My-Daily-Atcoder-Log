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


void solve(long long N, long long M, std::vector<long long> p, std::vector<std::string> S){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> p(M);
    std::vector<std::string> S(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &p[i]);
        std::cin >> S[i];
    }
    solve(N, M, std::move(p), std::move(S));
    return 0;
}
