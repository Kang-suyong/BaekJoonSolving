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

    string a;
    cin >> a;
    int cnt = 0;
    loop(i, a.size()){
        char c = a.at(i);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' | c == 'u')
            cnt++;
    }

    cout << cnt;
    
}
