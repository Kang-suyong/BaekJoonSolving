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

int n;

vector<int> node;
vector<int> edge[100001];
bool visited[100001] ={false};

void dfs(int root){
    visited[root] = true;

    for(int i = 0; i < edge[root].size(); i++){
        int next = edge[root][i];
        if(!visited[next]){
            node[next] = root;
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    node.resize(n + 1, 0);
    node[1] = 0;

    loop(i,n)
    {
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    dfs(1);

    for(int i = 2; i <= n; i++){
        cout << node[i] << '\n';
    }
}
