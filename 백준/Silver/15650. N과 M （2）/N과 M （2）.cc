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
bool visited[9]= {false, };
int arr[9] = {0,};

void dfs(int pre ,int cnt){
    if(cnt == m)
    {
        loop(i,m)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    else
    {
        for(int index = pre; index <= n; index++){
            if(!visited[index])
            {
                visited[index] = true;
                arr[cnt] = index;
                dfs(index+1 ,cnt + 1);
                visited[index] = false;
            }
        }
    }
    


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    dfs(1,0);
    
}
