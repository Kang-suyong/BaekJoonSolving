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

int  n,m;
vector<int> li;
vector<int> sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    loop(i,n)
    {
        int a;
        cin >> a;
        li.push_back(a);
    }

    sum.resize(n+1, 0);

    for(int i = 1; i <= n; i++){
        sum[i] = sum[i-1] + li[i-1];
    }

    loop(i,m){
        int a,b;
        cin >> a >> b;

        cout << sum[b] - sum[a-1] << '\n';
    }
    
}
