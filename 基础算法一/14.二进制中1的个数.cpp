#include<iostream>
using namespace std;
int lowbit(int x){
	return x&-x;//��ö�����������1 
}
int main(){
	 int n;cin>>n;
	 while(n--){
	 	int res=0;
	 	int m;cin>>m;
	 	while(m) m-=lowbit(m),res++;
	 	cout<<res<<" ";
	 }	
}
