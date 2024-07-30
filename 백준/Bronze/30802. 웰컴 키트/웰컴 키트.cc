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

int tshirt[6] = {0,};
int T, P;
int T_result = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;

    loop(i,6){
        int a;
        cin >> a;
        tshirt[i] = a;
    }
    cin >> T >> P;

    loop(i,6){
        int tem;
        if(tshirt[i]%T == 0){
            tem = tshirt[i]/T;
        }
        else if( 0 < tshirt[i]%T)
        {
            tem = tshirt[i]/T + 1;
        }

        T_result += tem;
    }
    cout << T_result << '\n';

    cout << n/P << ' ' << n%P << '\n';
}
