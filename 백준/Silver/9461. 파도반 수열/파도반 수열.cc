#include <iostream>


using namespace std;

int n;

long long P[101] = {0, };

int main(void)
{
    P[1] = P[2] =P[3] = 1;
    P[4] = P[5] = 2;

    for(int i = 6; i <= 100; i++){
        P[i] = P[i-1] + P[i-5];
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cout << P[a] << '\n';
    }
    
    return 0;
}
