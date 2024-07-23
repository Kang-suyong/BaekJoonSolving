#include <iostream>
#include <string>
#include <vector>


using namespace std;

string s;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    
    int result = 0;
    string num;
    bool isMinus = false;
 
    for (int i = 0; i <= s.size(); i++) {
        
        if (s[i] == '-' || s[i] == '+' || i==s.size()) {
            if (isMinus) {
                result -= stoi(num);
                num = "";
            }
            else {
                result += stoi(num);
                num = "";
            }
        }
        else {
            num += s[i];
        }
 
        if (s[i] == '-') {
            isMinus = true;
        }    
    }
    
    cout << result;
    return 0;
}