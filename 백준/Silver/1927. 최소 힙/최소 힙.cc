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

vector<int> heap;

void adjust(int node){

    while(node > 1){
        if(heap[node/2] > heap[node]){
            int tem = heap[node];
            heap[node] = heap[node/2];
            heap[node/2] = tem;

        }
        node /= 2;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    heap.push_back(INT32_MAX);
    
    loop(i,n){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            if(heap.size() == 1)
            {
                cout << 0 << '\n';
            }
            else{
                cout << heap[1] << '\n';

                heap[1] = heap.back();
                heap.pop_back();
                int node = 1;
                while(node * 2 < heap.size()){
                    int left = node * 2;
                    int right = node * 2 + 1;
                    int smaller = left;

                    if(right < heap.size() && heap[right] < heap[left])
                        smaller = right;

                    if(heap[node] <= heap[smaller])
                        break;
                    
                    int tem = heap[node];
                    heap[node] = heap[smaller];
                    heap[smaller] = tem;
                    
                    node = smaller;
                }



            }
        }
        else{
            heap.push_back(cmd);
            adjust(heap.size()-1);
        }

    }
    
    
}
