#include<iostream>
using namespace std;
const int N=1e5+10;
int s[N][N];
int n,m,q;
int main(){
	scanf("%d%d%d", &n, &m, &q);

    for (int i = 1; i <= n; i ++ )
        for (int j = 1; j <= m; j ++ )
            scanf("%d", &s[i][j]);
	return 0;
}
