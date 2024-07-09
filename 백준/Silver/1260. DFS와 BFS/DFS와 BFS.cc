#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <map>
#include <stack>
#include <queue>
#include <list>
#define loop(i,n) for(int i = 0; i< n; i++)
typedef long long ll;
using namespace std;


int n,m,v;
vector<int> adj_list[1001];
bool visited[1001] = {false, };

void dfs(int a){
    visited[a] = true;
    cout << a << ' ';
    loop(i, adj_list[a].size())
    {
        if(!visited[adj_list[a][i]])
        {
            dfs(adj_list[a][i]);
        }
    }

}

void bfs(int a){
    queue<int> q;
    visited[a]= true;
    q.push(a);
    
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        loop(i,adj_list[x].size())
        {
            if(!visited[adj_list[x][i]])
            {
                q.push(adj_list[x][i]);
                visited[adj_list[x][i]] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    cin >> n >> m >> v;

    loop(i, m){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
        sort(adj_list[i].begin(), adj_list[i].end());

    
    dfs(v);
    memset(visited, false, sizeof(visited));
    cout << '\n';
    bfs(v);



}
