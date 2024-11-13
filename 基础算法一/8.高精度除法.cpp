#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> div(vector<int> &A,int b,int &t){
	vector<int> res;
	t=0;
	for(int i=A.size()-1;i>=0;i--){
		t=t*10+A[i];
		res.push_back(t/b);
		t%=b;
	}
	reverse(res.begin(),res.end());
	while(res.back()==0&&res.size()>1) res.pop_back();
	return res;
}
int main(){
	string a;
	int b;
	cin>>a>>b;
	vector<int> A;
	for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
	int t;
	vector<int> res=div(A,b,t);
	for(int i=res.size()-1;i>=0;i--) printf("%d",res[i]);
	printf("\n%d",t);
	return 0;
} 
