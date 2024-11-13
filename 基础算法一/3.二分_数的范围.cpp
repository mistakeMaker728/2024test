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
			if(q[mid]>=x) r=mid;//��һ��Ŀ��ֵ���������ұߵ�ֵ��>=q[mid] 
			else l=mid+1;//��Ȼ��ߵ�ֵ(����mid)�������㣬��ֱ�Ӱ�midҲ�ų���ȥ 
		}
		if(q[l]!=x) cout<<"-1 -1"<<"\n";
		else{
			cout<<l<<" ";
			int l=0,r=n-1;
			while(l<r){
				int mid=l+r+1>>1;
				if(q[mid]<=x) l=mid;//���һ��Ŀ��ֵ����������ߵ�ֵ��<=q[mid] 
				else r=mid-1;
			}
			cout<<l<<"\n";
		}
	}
	return 0;
} 
