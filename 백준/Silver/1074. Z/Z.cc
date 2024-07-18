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

int n,r,c;

int cnt = 0;

void Z(int x, int y, int N)
{
    if(c == x && r == y)
    {
        cout << cnt;
        return;
    }
    
    if(c < x + N && c >= x && y <= r && y + N > r){
        Z(x,y,N/2);
        Z(x + N/2, y, N/2);
        Z(x, y + N/2, N/2);
        Z(x + N/2, y + N/2, N/2);
    }
    else{
        cnt += N *N;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    cin >> n >> r >> c;

    Z(0, 0, pow(2, n));

}
