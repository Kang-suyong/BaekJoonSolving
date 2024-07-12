#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define loop(i,n) for(int i = 0; i < n; i++)
typedef long long ll;

vector<int> adj[100001];
int n, m, r;
int cnt = 0;
int result[100001] = {0};

bool visited[100001] = {false};

void dfs(int a) {
    if (visited[a])
        return;
    visited[a] = true;
    result[a] = ++cnt;
    // adj[a]의 모든 인접 노드들에 대해서 DFS를 수행합니다.
    for (int i = 0; i < adj[a].size(); i++) {
        int next = adj[a][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;

    loop(i, m) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // adj 리스트의 각 요소를 정렬하여 방문 순서를 오름차순으로 맞춥니다.
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(r);

    for (int i = 1; i <= n; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}
