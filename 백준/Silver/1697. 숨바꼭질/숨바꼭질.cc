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

vector<int> node[100001];
int n,m;

void bfs(int start){
    if(n == m){
        cout << 0;
        return;
    }
    int depth[100001];
    for(int i = 0; i <= 100000; i++)
        depth[i] = INT32_MAX;
    queue<int> q;
    q.push(start);
    depth[start] = 0;

    while(!q.empty()){
        int tem = q.front();
        q.pop();

        for(int i = 0; i < node[tem].size(); i++){
            int next = node[tem][i];
            // bfs 특성상 먼저 방문한 노드는 최단 경로로 방문한 것
            if(depth[next] == INT32_MAX){
                q.push(next);
                depth[next] = depth[tem] + 1;
                if(next == m){
                    cout << depth[m] << '\n';
                    return;
                }
            }
        }

    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    cin >> n >> m;

    node[0].push_back(1);
    for(int i = 1; i <= 100000; i++){
        if (i - 1 >= 0) node[i].push_back(i - 1);
        if (i + 1 <= 100000) node[i].push_back(i + 1);
        if (2 * i <= 100000) node[i].push_back(2 * i);
    }
    bfs(n);
    
}
