#include<iostream>
using namespace std;
const int N=1e4+10;
int dir[N][N],map[N][N];
void insert(int x1, int y1, int x2, int y2, int c)
{
    map[x1][y1] += c;
    map[x2 + 1][y1] -= c;
    map[x1][y2 + 1] -= c;
    map[x2 + 1][y2 + 1] += c;
}
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&dir[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			map[i][j]+=dir[i][j];
			map[i+1][j]-=dir[i][j];
			map[i][j+1]-=dir[i][j];
			map[i+1][j+1]+=dir[i][j]; 
		}
	}
	while(q--){//对差分数组进行加减处理 
		int x1,y1,x2,y2,c;
		cin>>x1>>y1>>x2>>y2>>c;
			map[x1][y1]+=c;
			map[x2+1][y1]-=c;
			map[x1][y2+1]-=c;
			map[x2+1][y2+1]+=c;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			map[i][j]+=map[i-1][j]+map[i][j-1]-map[i-1][j-1];//累加 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",map[i][j]);
		}
		puts("");
	}
	return 0;
}
/*
3 4 3
1 2 2 1
3 2 2 1
1 1 1 1
1 1 2 2 1
1 3 2 3 2
3 1 3 4 1
*/
