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

int n,m;
vector<string> dp;
map<string, int> ma;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int cnt = 0;
    loop(i,n){
        string a;
        cin >> a;
        ma[a] = 1;
    }
    loop(i,m){
        string a;
        cin >> a;
        if(ma.find(a) != ma.end() && ma[a] == 1)
        {
            cnt++;
            dp.push_back(a);
        }

    }

    sort(dp.begin(), dp.end());

    cout << dp.size() << '\n';
    loop(i, dp.size())
    {
        cout << dp[i] << '\n';
    }


    
}
