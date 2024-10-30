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

    vector<int> A;
    vector<int> B;
    int result = 0;
    int n;

    cin >> n;

    loop(i,n)
    {
        int a;
        cin >> a;
        A.push_back(a); 
    }
    loop(i,n){
        int b;
        cin >> b;
        B.push_back(b);
    }

    sort(A.begin(),A.end(), less<>() );
    sort(B.begin(), B.end(), greater<>());

    loop(i,n){
        int c = A[i] * B[i];
        result += c;
    }

    cout << result;
    
}
