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

vector<int> MaxHeap;

void adjust(int node){

    while(node > 1){
        if(MaxHeap[node/2] < MaxHeap[node])
        {
            swap(MaxHeap[node/2], MaxHeap[node]);
        }
        node /= 2;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    MaxHeap.push_back(0);
    loop(i,n){
        int a;
        cin >> a;

        if(a == 0)
        {
            if(MaxHeap.size() == 1)
            {
                cout << 0 << '\n';
            }
            else{
                cout << MaxHeap[1] << '\n';
                MaxHeap[1] = MaxHeap[MaxHeap.size()-1];
                MaxHeap.pop_back();

                int index = 1;
                while(index * 2 < MaxHeap.size()){
                    int right = index * 2 + 1;
                    int left = index * 2;
                    int larger = left;

                    if(MaxHeap[right] > MaxHeap[left] && right < MaxHeap.size())
                    {
                        larger = right;
                    }

                    if(MaxHeap[index] > MaxHeap[larger]){
                        break;
                    }

                    swap(MaxHeap[index], MaxHeap[larger]);
                    index = larger;
                }
            }
        }
        else
        {
            MaxHeap.push_back(a);
            adjust(MaxHeap.size()-1);
        }
    }
}
