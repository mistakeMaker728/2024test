#include<iostream>
using namespace std;
int n;
const int N=1e6+10;//1000010
int q[N],temp[N];//需要而外的辅助数组
void merge_sort(int q[],int l,int r){
	if(l>=r) return;
	int mid = l+r >>1;//确定中间值 
	merge_sort(q,l,mid),merge_sort(q,mid+1,r);//先递归分组 
	int k=0,i=l,j=mid+1;//开始处理递归N/logN次后的序列，默认是排序完成的序列 
	while(i<=mid&&j<=r){//借助temp数据来暂时储存排序的序列 
//		temp[k++]=q[i++]:q[j++]?q[i]<q[j];
		if(q[i]<=q[j]) temp[k++]=q[i++];
		else temp[k++]=q[j++];
	}
	while(i<=mid) temp[k++]=q[i++];//一个序列过大的情况 
	while(j<=r) temp[k++]=q[j++];
	for(i=l,j=0;i<=r;i++,j++) q[i]=temp[j];//i是原序列的指针，j是temp系列的指针 
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	merge_sort(q,0,n-1);
	for(int i=0;i<n;i++) printf("%d",q[i]);
	
	return 0;
} 
