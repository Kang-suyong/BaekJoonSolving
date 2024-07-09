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

int n,m,k = 0;
vector<string> arr;
map<string, int> ma;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    loop(i,n){
        string a;
        cin >> a;
        arr.push_back(a);
        ma.insert(make_pair(a, i+1));
    }

    loop(i,m){
        string a;
        cin >> a;
        bool order = isdigit(a.at(0));

        if(order){
            int index = stoi(a);
            cout << arr[index-1] << '\n';
        }
        else{
            cout << ma[a] << '\n';
        }

    }

}
