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

pair<int, int> person[50];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int count = 1;

    int n;
    cin >> n;
    loop(i,n){
        int a,b;
        cin >> a >> b;
        person[i].first = a;
        person[i].second = b;
    }

    loop(i, n)
    {
        count = 1;
        loop(j,n){
            if(person[i].first < person[j].first && person[i].second < person[j].second)
                count++;
        }
        cout << count << ' ';
    }

    
}
