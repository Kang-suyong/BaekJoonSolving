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

vector<pair<string, int>> arr;

bool compare(pair<string, int> a, pair<string, int> b){
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    loop(i,n){
        string a;
        int b;
        cin >> b >> a;
        arr.push_back(make_pair(a,b));
    }

    stable_sort(arr.begin(), arr.end(), compare);

    loop(i, arr.size()){
        cout << arr[i].second << ' ' << arr[i].first << '\n';
    }
    
}
