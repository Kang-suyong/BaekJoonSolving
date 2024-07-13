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



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int height[10] = {0,};
    int sum = 0;
    loop(i,9){
        cin >> height[i];
        sum += height[i];
    }

    sort(height, height + 9);

    for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {

			if (sum - height[i] - height[j] == 100) {

				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
					cout << height[k] << '\n';
				}
				return 0;
			}
		}
	}
    
}
