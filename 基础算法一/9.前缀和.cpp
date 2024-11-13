#include<iostream>
#include<vector>
using namespace std;
const int N=1e6+10;
int m,n;
int q[N],s[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&q[i]);
	for(int i=1;i<=n;i++) s[i]=s[i-1]+q[i]; 
	while(m--){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d",s[r]-s[l-1]);
	}
}
/*
5 3
2 1 3 6 4
1 2
1 3
2 4

*/
