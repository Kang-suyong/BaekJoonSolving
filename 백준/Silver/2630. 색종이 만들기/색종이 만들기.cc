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
bool paper[130][130];

// true = blue;
int blue = 0;
int white = 0;

bool checkColor(int x, int y, int n) {
    for (int i = x; i < x + n; i++) {
        for (int j = y; j < y + n; j++) {
            if (paper[i][j] != paper[x][y]) {
                return false;
            }
        }
    }
    return true;
}

void pa(int x, int y, int n){
    if(checkColor(x,y,n)){
        if(paper[x][y]){
            blue++;
        }
        else
            white++;
    }
    else{
        pa(x,y, n/2);
        pa(x + n/2, y , n/2);
        pa(x, y + n/2, n/2);
        pa(x + n/2, y + n/2, n/2);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n;

    loop(i,n){
        loop(j, n){
            cin >> paper[i+1][j+1];
        }
    }

    pa(1,1, n);

    cout << white << '\n' << blue;
    
}
