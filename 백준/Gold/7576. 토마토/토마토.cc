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

int box[1001][1001];
int day[1001][1001];
int posR[4] = {-1,0,1,0};
int posC[4] = {0,-1,0,1};
vector<pair<int,int>> start_point;
int result = 0;

void bfs(){
    queue<pair<int, int>> q;

    loop(i, n) {
        loop(j, m) {
            if (box[i+1][j+1] == 1) {
                q.push({i+1, j+1});
                day[i+1][j+1] = 0;
            }
        }
    }

    while(!q.empty()){
        pair<int, int> tem = q.front();
        q.pop();
        int r = tem.first;
        int c = tem.second;

        loop(i,4){
            int rr = r + posR[i];
            int cc = c + posC[i];
            if(0 < rr && rr <= n && 0 < cc && cc <= m && box[rr][cc] == 0){
                q.push(make_pair(rr, cc));
                box[rr][cc] = 1;
                day[rr][cc] = day[r][c] + 1; 
                result = max(day[rr][cc] , result);
            }
        }

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    loop(i,n){
        loop(j,m)
        {
            int a;
            cin >> a;
            box[i+1][j+1] = a;
            day[i+1][j+1] = 0;
            
        }
    }
    
    bfs();

    bool find = false;

    loop(i,n){
        loop(j,m){
            if(box[i+1][j+1] == 0){
                find = true;
                break;
            }
        }
        if(find){
            cout << -1;
            break;
        }
    }

    if(!find){
        cout << result;
    }
    
}
