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

    string a = "";

    while(true){
        cin >> a;
        bool find = true;

        if(a == "0"){
            break;
        }
        else if(a.length() == 1)
        {
            cout << "yes" << '\n';
            continue;
        }


        for(int i = 0; i <= a.length()/2 - 1; i++){
            char start = a[i];
            char end = a[a.length() - i - 1];
            if(start != end){
                find = false;
                break;
            }
        }

        if(find){
            cout << "yes" << '\n';
        }
        else
            cout << "no" << '\n';

    }
    

    
    
}
