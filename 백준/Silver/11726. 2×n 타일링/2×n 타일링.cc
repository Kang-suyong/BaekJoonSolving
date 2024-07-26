#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <list>
#include <typeinfo>
#define loop(i,n) for(int i = 0; i< n; i++)
typedef long long ll;
using namespace std;

int n;

int dp[1001] = { 0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++){

        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
        
    }

    cout << dp[n];

    
}
