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

short house[25][25];
vector<int> result;

int n;

void bfs(int x, int y)
{
    int depth = 1;
    queue<pair<int, int>> q;
    house[x][y] = 0;
    q.push(make_pair(x,y));

    while(!q.empty()){
        pair<int, int> tem = q.front();
        q.pop();
        x = tem.first;
        y = tem.second;
        
        if(x - 1 >= 0 && house[x-1][y] == 1)
        {
            house[x-1][y] = 0;
            depth += 1;
            q.push(make_pair(x-1, y));
        }

        if(y - 1 >= 0 && house[x][y-1] == 1)
        {
            house[x][y-1] = 0;
            depth += 1;
            q.push(make_pair(x, y-1));
        }

        if(x + 1 < n && house[x+1][y] == 1)
        {
            house[x+1][y] = 0;
            depth += 1;
            q.push(make_pair(x+1, y));
        }

        if(y + 1 < n && house[x][y+1] == 1)
        {
            house[x][y+1] = 0;
            depth += 1;
            q.push(make_pair(x, y+1));
        }

    }
    result.push_back(depth);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    loop(i,n){
        string a;
        cin >> a;
        loop(j,n){
            house[i][j] = a[j] - '0';
        }
    }

    loop(i,n){
        loop(j,n){
            if(house[i][j] == 1)
                bfs(i,j);
        }
    }
    
    cout << result.size() << '\n';
    sort(result.begin(), result.end());
    loop(i, result.size()){
        cout << result[i] << '\n';
    }
    
}
