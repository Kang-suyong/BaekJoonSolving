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

ll dp[11];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= 10; i++){
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
    }
    loop(i,n){
        int a;
        cin >> a;
        cout << dp[a] << '\n';
    }
    
}
