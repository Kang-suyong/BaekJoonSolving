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

int n,m;
int seq[9] = { 0, };
bool visited[9] = {false, };

void dfs(int cnt)
{
    if(cnt == m)
    {
        loop(index, m)
            cout << seq[index] << ' ';
        cout << '\n';
    }
    else
    {
        for(int index = 1; index <= n; index++){
            if(!visited[index])
            {
                visited[index] = true;
                seq[cnt] = index;
                dfs(cnt + 1);
                visited[index] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    dfs(0);
}

