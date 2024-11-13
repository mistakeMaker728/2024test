#include<iostream>
using namespace std;
const int N=1e6+10;
int m,n; 
int q[N];
/*
6 3
1 2 2 3 3 4
3
4
5

*/
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	while(m--){
		int x;
		scanf("%d",&x);
		int l=0,r=n-1;
		while(l<r){
			int mid=l+r>>1;
			if(q[mid]>=x) r=mid;//第一个目标值的条件是右边的值都>=q[mid] 
			else l=mid+1;//既然左边的值(包括mid)都不满足，就直接把mid也排除出去 
		}
		if(q[l]!=x) cout<<"-1 -1"<<"\n";
		else{
			cout<<l<<" ";
			int l=0,r=n-1;
			while(l<r){
				int mid=l+r+1>>1;
				if(q[mid]<=x) l=mid;//最后一个目标值的条件是左边的值都<=q[mid] 
				else r=mid-1;
			}
			cout<<l<<"\n";
		}
	}
	return 0;
} 
