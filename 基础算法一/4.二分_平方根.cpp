#include<iostream>
using namespace std;
//浮点数二分没有边界问题，因为精度够高。 	

int main(){
	double x;
	cin>>x;
	double l=0,r=x;
	
	while(r-l>1e-8){
		double mid=(l+r)/2;
		if(mid*mid>=x) r=mid;
		else l=mid; 
	}
	
	printf("%lf\n",l);
	return 0;
}
