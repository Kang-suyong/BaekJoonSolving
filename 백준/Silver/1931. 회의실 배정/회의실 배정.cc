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

vector<pair<int, int>> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int max = 0;

    loop(i,n){
        int a,b;
        cin >> a >> b;
        s.push_back(make_pair(b,a));
    }

    sort(s.begin(), s.end());

    int now = s[0].first;
    int result = 1;
    for(int i = 1; i < n; i++){
        
        if(now <= s[i].second){
            result++;
            now = s[i].first;
        }
    }


    cout << result;


    
    
}
