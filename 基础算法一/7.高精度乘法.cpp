#include<iostream>
#include<vector>
using namespace std;
vector<int> mul(vector<int> &A,int B){
	vector<int> res;
	int t=0;
	for(int i=0;i<A.size()||t;i++){
		if(i<A.size()) t+=A[i]*B;
		res.push_back(t%10);
		t/=10;
	}
	while(res.size()>0&&res.back()==0) res.pop_back();//Ç°µ¼Áã 
	return res;
}

int main(){
	string a;
	int b;
	cin>>a>>b;
	vector<int> A;
	for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
	auto C=mul(A,b);
	for(int i=C.size()-1;i>=0;i--) printf("%d",C[i]);
		
	return 0;
}
