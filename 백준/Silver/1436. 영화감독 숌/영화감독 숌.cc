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

    
    int n;
    cin >> n;

    int index = 666;
    int i = 0;
    string a;
    bool find = false;


    while (!find)
    {
        a = to_string(index);
        loop(j, a.length())
        {
            if(a[j] == '6' && a[j+1] == '6' && a[j+2] == '6')
            {
                i++;
                if(i == n)
                {
                    find = true;
                    cout << index;
                }
                break;
            }
        }
        index++;
    }

}
