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

bool path[101][101];

void bfs(int r, int c){
    int depth[101][101];
    queue<pair<int,int>> q;
    q.push(make_pair(r,c));
    depth[r][c] = 1;

    while(!q.empty()){
        pair<int,int> tem = q.front();
        q.pop();

        r = tem.first;
        c = tem.second;

        if(path[r][c-1] && c-1 > 0){
            q.push(make_pair(r,c-1));
            depth[r][c-1] = depth[r][c] + 1;
            path[r][c-1] = false;
        }

        if(path[r-1][c] && r-1 > 0){
            q.push(make_pair(r-1,c));
            depth[r-1][c] = depth[r][c] + 1;
            path[r-1][c] = false;
        }

        if(path[r][c+1] && c+1 <= m)
        {
            q.push(make_pair(r,c+1));
            depth[r][c+1] = depth[r][c] + 1;
            path[r][c+1] = false;
        }

        if(path[r+1][c] && r+1 <= n){
            q.push(make_pair(r+1,c));
            depth[r+1][c] = depth[r][c] + 1;
            path[r+1][c] = false;
        }
    }

    cout << depth[n][m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(path, false , sizeof(path));
    cin >> n >>m;

    loop(i,n){
        string a;
        cin >> a;

        loop(j,m){
            if(a[j] == '1')
                path[i+1][j+1] = true;
        }
    }

    bfs(1, 1);
    
}
