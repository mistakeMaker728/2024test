#include<iostream>
using namespace std;
int n;
const int N=1e6+10;//1000010
int q[N],temp[N];//��Ҫ����ĸ�������
void merge_sort(int q[],int l,int r){
	if(l>=r) return;
	int mid = l+r >>1;//ȷ���м�ֵ 
	merge_sort(q,l,mid),merge_sort(q,mid+1,r);//�ȵݹ���� 
	int k=0,i=l,j=mid+1;//��ʼ����ݹ�N/logN�κ�����У�Ĭ����������ɵ����� 
	while(i<=mid&&j<=r){//����temp��������ʱ������������� 
//		temp[k++]=q[i++]:q[j++]?q[i]<q[j];
		if(q[i]<=q[j]) temp[k++]=q[i++];
		else temp[k++]=q[j++];
	}
	while(i<=mid) temp[k++]=q[i++];//һ�����й������� 
	while(j<=r) temp[k++]=q[j++];
	for(i=l,j=0;i<=r;i++,j++) q[i]=temp[j];//i��ԭ���е�ָ�룬j��tempϵ�е�ָ�� 
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	merge_sort(q,0,n-1);
	for(int i=0;i<n;i++) printf("%d",q[i]);
	
	return 0;
} 
