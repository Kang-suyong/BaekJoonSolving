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

int main(){
	int arr[1001],k=1,n,m,ans=0;
	for(int i=1; i<=1000; i++){
		for(int j=1; j<=i; j++){
			arr[k]=i;
			if(k>1000){
				break;
			}
			k++;
		}
	}
	scanf("%d %d",&n,&m);
	for(int i=n; i<=m; i++){
		ans+=arr[i];
	}
	printf("%d",ans);
}
