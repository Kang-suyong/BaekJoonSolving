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

vector<int> edge[1001];
bool visited[1001] = {false,};
int result = 0;

void dfs(int start){
    visited[start] = true;

    loop(i, edge[start].size()){
        int next = edge[start][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for(int i = 1; i <= m; i++)
    {
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        if(!visited[i])
        {
            dfs(i);
            result++;
        }
            
    }
    
    cout << result;
}
