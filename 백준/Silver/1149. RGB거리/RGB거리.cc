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
vector<int> cost[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cost[0].push_back(0);
    cost[0].push_back(0);
    cost[0].push_back(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        int r,g,b;
        cin >> r >> g >> b;
        cost[i].push_back(r);
        cost[i].push_back(g);
        cost[i].push_back(b);

        cost[i][0] = min(cost[i-1][1], cost[i-1][2]) + cost[i][0];
        cost[i][1] = min(cost[i-1][0], cost[i-1][2]) + cost[i][1];
        cost[i][2] = min(cost[i-1][0], cost[i-1][1]) + cost[i][2];
    }

    cout << min(cost[n][0], min(cost[n][1], cost[n][2]));



}
