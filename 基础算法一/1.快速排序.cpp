#include<iostream>

using namespace std;
/*
案例
5
5 4 3 2 1
*/
const int N = 1e6 + 10; 

int n;
int q[N];
void quick_sort(int q[],int l,int r){
	if(l>=r) return; 
	int x= q[r],i=l-1,j=r+1;//取边界 
	while(i<j){
		do i++;while (q[i]<x); 
		do j--;while (q[j]>x);
		if(i<j) swap(q[i],q[j]);
	}
	quick_sort(q,l,i-1);//负责处理左半段 
	quick_sort(q,i,r);//递归处理右半段 
	
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	
	quick_sort(q,0,n-1);
	for (int i=0;i<n;i++) printf("%d ",q[i]);
}
