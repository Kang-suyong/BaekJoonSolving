#include <iostream>
#include <cmath>
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

    int n;
    cin >> n;
    int tem;
    int number[8] = { 0, };
    bool find = false;
    for(int i = 1; i < n; i++){
        tem = i;
        for(int j = 0; tem != 0; j++)
        {
            number[j] = tem % 10;
            tem /= 10;
        }
        int sum = 0;
        loop(j, 7)
            sum += number[j];

        if(n == i + sum)
        {
            cout << i;
            find = true;
            break;
        }
        
        
    }
    
    if (!find)
    {
        cout << 0;
    }
        
    
}
