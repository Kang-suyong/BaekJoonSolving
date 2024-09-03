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

using namespace std;

int m,n,h ; // 가로 세로 높이

int box[101][101][101];
int day[101][101][101];
int result = 0;
struct coordinate
{
    int x;
    int y;
    int z;
};

int posX[6] = {-1,1,0,0,0,0};
int posY[6] = {0,0,1,-1,0,0};
int posZ[6] = {0,0,0,0,1,-1};

vector<coordinate> start;

void bfs(vector<coordinate> s){
    queue<coordinate> q;
    memset(day, 0, sizeof(day));
    
    for(int i = 0; i < s.size(); i++){
        q.push(s[i]);
    }

    while(!q.empty()){
        coordinate tem = q.front();
        q.pop();

        for(int i = 0; i < 6; i++){

            int nowX = tem.x + posX[i];
            int nowY = tem.y + posY[i];
            int nowZ = tem.z + posZ[i];

            if(0 < nowX && nowX <= m && 0 < nowY && nowY <= n &&
                0 < nowZ && nowZ <= h && box[nowZ][nowY][nowX] == 0
                )
            {
                box[nowZ][nowY][nowX] = 1;
                coordinate t; 
                t.x = nowX;
                t.y = nowY; 
                t.z = nowZ;
                day[nowZ][nowY][nowX] = day[tem.z][tem.y][tem.x] + 1;
                result = max(result, day[nowZ][nowY][nowX]);
                q.push(t);   
            }

        }
        
    }

}


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    cin >> m >> n >> h;

    for(int i = 1; i <= h; i++){

        for(int j = 1; j <= n; j++){

            for(int k = 1; k <= m; k++){

                cin >> box[i][j][k];
                if(box[i][j][k] == 1){
                    coordinate a;
                    a.x = k;
                    a.y = j;
                    a.z = i;
                    start.push_back(a);
                }
                
            }
        }

    }

    bfs(start);

    bool complete = true;
   for(int i = 1; i <= h; i++){

        for(int j = 1; j <= n; j++){

            for(int k = 1; k <= m; k++){
                if(box[i][j][k] == 0)
                {
                    complete = false;
                    break;
                }
            }
            if(!complete)
                break;
        }
        if(!complete)
            break;
    }

    if(complete){
        cout << result;
    }
    else{
        cout << -1;
    }


    return 0;
}