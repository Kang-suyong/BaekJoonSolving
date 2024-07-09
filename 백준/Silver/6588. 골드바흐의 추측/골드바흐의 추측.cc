#include <iostream>
#include <math.h>
#include <vector>
#include <math.h>

#define MAX 1000000
using namespace std;

int num[MAX+1] = {0, };
vector<int>prime;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for(int i = 2; i <= MAX; i++) // num 초기화
        num[i] = i;

    for(int i = 2; i <= sqrt(MAX); i++)
    {
        if(num[i] == 0)
            continue;
        for(int j = i*i; j <= MAX; j+=i) // i의 배수인 숫자 0으로 초기화
        {
            num[j] = 0;
        }
    }
    for(int i = 3; i <= sqrt(MAX); i += 2) // vector에 받기
    {
        if(num[i] != 0)
        {
            prime.push_back(num[i]);
        }
    }

    // 출력
    while (true)
    {
        int c;
        cin >> c;

        if(c == 0)
            break;

        for(int i = 0; i < prime.size(); i++)
        {
            if((c-prime[i]) == num[c-prime[i]])
            {
                cout << c << " = " << prime[i] << " + " << c-prime[i] << '\n';
                break;
            }
        }
    }
    

}