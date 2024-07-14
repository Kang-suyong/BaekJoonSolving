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

    
    int e,s,m;
    cin >> e >> s >> m;

    int i = 1;
    int a, b, c;
    a = b = c =1;
    for(int i = 1; i < 8000 ;i++)
    {
        if(a == 16)
            a = 1;
        if(b == 29)
            b = 1;
        if(c == 20)
            c = 1;

        
        if(e == a && s == b && m == c){
            cout << i;
            break;
        }
        a++, b++, c++;
    }
    
}
