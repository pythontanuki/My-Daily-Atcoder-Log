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

void solve(long long N, std::vector<std::vector<long long>> a){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> a(3, std::vector<long long>(N));
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < N ; j++){
            std::scanf("%lld", &a[i][j]);
        }
    }
    solve(N, std::move(a));
    return 0;
}
