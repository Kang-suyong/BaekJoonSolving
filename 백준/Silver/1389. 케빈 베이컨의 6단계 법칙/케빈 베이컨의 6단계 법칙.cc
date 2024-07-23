#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> result;
vector<int> g[101];

void bfs(int user) {
    int sum = 0;
    int depth[101] = {0};
    bool visited[101] = {false};
    queue<int> q;
    q.push(user);
    visited[user] = true;

    while (!q.empty()) {
        int tem = q.front();
        q.pop();

        for (int i = 0; i < g[tem].size(); i++) {
            int next = g[tem][i];
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
                depth[next] = depth[tem] + 1;
                sum += depth[next];
            }
        }
    }
    result.push_back(sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {  // m개의 간선을 입력받습니다.
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {  // 노드는 1부터 n까지입니다.
        bfs(i);
    }

    int Min = 1000001;
    int minnumber = 1;
    for (int i = 0; i < n; i++) {
        if (Min > result[i]) {
            Min = result[i];
            minnumber = i + 1;
        }
    }
    cout << minnumber << '\n';
    return 0;
}
