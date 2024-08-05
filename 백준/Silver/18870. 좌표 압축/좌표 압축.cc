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

vector<ll> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    loop(i,n){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    vector<ll> tem = v;

    sort(tem.begin(), tem.end());

    map<ll, int> m;

    int de = 0;

    loop(i,n){
        if(tem[i-1] != tem[i])
            m[tem[i]] = de++;
    }

    loop(i, n){
        cout << m[v[i]] << ' ';
    }
    
}
