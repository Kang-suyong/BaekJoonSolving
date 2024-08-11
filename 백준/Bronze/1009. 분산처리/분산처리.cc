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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        int a, b, result = 1;
        cin >> a >> b;

        for (int j = 0; j < b; j++) 
        {
            result = (result * a) % 10;
        }

        if (result == 0) 
        {
            cout << 10 << '\n';	
        }
        else 
        {
            cout << result << '\n';
        }
    }
}
