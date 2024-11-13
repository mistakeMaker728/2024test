#include<iostream>
using namespace std;

const int N=1e5+10;
int n,k;
int q[N];
int quick_sort(int q[],int l,int r,int k){
	if(l>=r) return q[l];
	int x=q[r],i=l-1,j=r+1;
	while(i<j){
		do i++;while (q[i]<x);
		do j--;while (q[j]>x);
		if(i<j) swap(q[i],q[j]);
	}
	if(j-l+1>=k) quick_sort(q,l,i-1,k);
	else quick_sort(q,i,r,k-(j-l+1));
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&q[i]);
	}
	cout<<quick_sort(q,0,n-1,k)<<"\n";
	
	return 0;
} 
