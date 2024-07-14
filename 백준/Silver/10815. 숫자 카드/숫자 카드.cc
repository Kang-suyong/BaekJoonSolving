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

map<ll, int> Map;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    loop(i,n){
        ll a;
        cin >> a;
        Map[a] = 1;
    }

    int m;
    cin >> m;
    loop(i, m){
        ll a;
        cin >> a;
        if(Map[a])
        {
            cout << 1 << ' ';
        }
        else
            cout << 0 << ' ';
    }
    
}
