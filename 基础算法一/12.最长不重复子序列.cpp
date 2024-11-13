#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N],b[N]; 
int main(){
	int n;cin>>n;
	int res=0;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0,j=0;i<n;i++){
		b[a[i]]++;
		while(b[a[i]]>1){
			b[a[j++]]--;
		}
		res=max(res,i-j+1);
	}
	printf("%d",res);
	return 0;
}
