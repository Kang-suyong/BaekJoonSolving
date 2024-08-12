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

char c[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
	string s;
	while (true) {
		a = 0;
		getline(cin, s);
		if (s == "#") break;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 10; j++) {
				if (s[i] == c[j]) {
					a++;
					break;
				}
			}
		}
		cout << a << '\n';
	}
    

    
}
