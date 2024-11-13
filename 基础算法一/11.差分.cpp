#include<iostream>
using namespace std;
const int N=1e5+10;
int m,n;
int a[N],b[N];
void insert(int l,int r,int c){//进行区间操作 11
/*
6 3
1 2 2 1 2 1
1 3 1
3 5 1
1 6 1
*/ 
	b[l]+=c;
	b[r+1]-=c;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);//读入原始数列  1 2 2 1 2 1
//	for(int i=1;i<=n;i++) insert(i,i,a[i]);//对数列b进行差分操作b2=a2-a1； 
	for(int i=1;i<=n;i++) b[i]=a[i]-a[i-1]; //这种写法更加易懂 
	for(int i=1;i<=n;i++) printf("%d ",b[i]); 
	while(m--){//进行m次区间加减 
		int l,r,c;
		scanf("%d%d%d",&l,&r,&c);
		insert(l,r,c);
	}
	for(int i=1;i<=n;i++) b[i]+=b[i-1];//前缀和 
	for(int i=1;i<=n;i++) printf("%d ",b[i]);
	return 0;
}
