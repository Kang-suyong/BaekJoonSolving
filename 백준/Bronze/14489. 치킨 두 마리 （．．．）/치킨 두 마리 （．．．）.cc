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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll a,b;
    cin >> a >> b;
    ll chicken;
    cin >> chicken;

    ll c = a + b;

    if(c - 2* chicken >= 0)
        cout << c- 2* chicken;
    else
        cout << c;

    
    
}
