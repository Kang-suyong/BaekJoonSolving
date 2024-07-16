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

int n;
queue<int> que;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    loop(i,n){
        string a;
        cin >> a;

        if(a == "push"){
            int num;
            cin >> num;
            que.push(num);
        }
        else if(a == "pop")
        {
            if(que.empty())
                cout << -1 << '\n';
            else
            {
                int b = que.front();
                que.pop();
                cout << b << '\n';
            }
        }
        else if(a == "size")
        {
            cout << que.size() << '\n';
        }
        else if(a == "empty")
        {
            if(que.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(a == "front"){
            if(que.empty())
                cout << -1 << '\n';
            else
                cout << que.front() << '\n';
        }
        else if(a == "back"){
            if(que.empty())
                cout << -1 << '\n';
            else
                cout << que.back() << '\n';
        }
    }
    
}
