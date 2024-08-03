#include <iostream>
#include <sstream>
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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    loop(i,n){
        vector<int> v;
        string a;
        cin >> a;

        int length;
        cin >> length;

        string arr;
        cin >> arr;

        istringstream ss (arr);
        string subs1;

        while(getline(ss,subs1,',')){
            string temp;
            for(char ch : subs1){
                if(isdigit(ch)){
                    temp += ch;
                }
            }
            if(!temp.empty()){
                v.push_back(stoi(temp));
            }
        }

        int begin, end;
        begin = 0;
        end = v.size()-1;
        bool read = false;
        bool ex =false;

        loop(j,a.size()){
            if(a[j] == 'R')
            {
                read = !read;

            }
            else if(a[j] == 'D'){
                if(length == 0){
                    ex = true;
                    break;
                }

                if(read){
                    end--;
                }
                else
                {
                    begin++;
                } 
                length--;
            }
        }
        

        
        if(ex)
        {
            cout << "error" << '\n';
            continue;
        }

        if(!ex && begin > end){
            cout << "[]" << '\n';
            continue;
        }



        if(read)
        {
            cout << '[';
            for(int j = end; j >= begin; j--)
            {
                cout << v[j];
                if(j != begin)
                    cout << ',';
            }
                cout << ']' << '\n';
        }
        else{
            cout << '[';
            for(int j = begin; j <= end; j++)
            {
                cout << v[j];
                if(j != end)
                    cout << ',';
            }
                cout << ']' << '\n';
        }


    }
}
