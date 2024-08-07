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
short path[1001][1001];
short result[1001][1001];
pair<int,int> co;

int posX[4] = {-1,0,1,0};
int posY[4] = {0,-1,0,1};

void bfs(pair<int,int> start){
    queue<pair<int, int>> q;
    q.push(start);
    path[start.first][start.second] = 0;
    result[start.first][start.second] = 0;

    while(!q.empty()){
        
        pair<int,int> tem = q.front();
        q.pop();
        int r = tem.first;
        int c = tem.second;
        
        
        loop(i,4){
            int rr = r + posY[i];
            int cc = c + posX[i];
            if(0 < rr && rr <= n && 0 < cc && 
                cc <= m && path[rr][cc] == 1)
            {
                path[rr][cc] = 0;
                result[rr][cc] = result[r][c] + 1;
                q.push(make_pair(rr, cc));
            }

        }
    }
    loop(i,n){
        loop(j,m){
            if(path[i+1][j+1] == 0 && result[i+1][j+1] == -1)
            {
                result[i+1][j+1]= 0;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(path, 0 , sizeof(path));
    memset(result, -1, sizeof(result));

    cin >> n >> m;

    loop(i,n){
        loop(j,m){
            cin >> path[i+1][j+1];
            if(path[i+1][j+1] == 2){
                co = make_pair(i+1, j+1);
            }
        }
    }
    
    bfs(co);

    loop(i,n){
        loop(j,m){
            cout << result[i+1][j+1] << ' ';
        }
        cout << '\n';
    }
}
