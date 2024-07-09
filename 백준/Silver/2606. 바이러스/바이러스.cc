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

int matrix[101][101];
bool visited[101] = { false, };
int n;
int number = 0;

void dfs(int a){
    visited[a] = true;
    number++;
    for(int i = 1; i <= n; i++){

        if(visited[i])
            continue;

        if(matrix[a][i] == 1)
        {
            dfs(i);
        }

    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(matrix, 0, sizeof(matrix));

    
    cin >> n;

    int m;
    cin >> m;
    loop(i,m){
        int a,b;
        cin >> a >> b;
        matrix[a][b] = matrix[b][a] = 1;
    }

    

    dfs(1);
    cout << number-1;
}
