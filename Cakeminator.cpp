#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cin>>n>>m;int cnt=0,ate=0, total=0;
char arr[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>arr[i][j];
		if(arr[i][j]!='S'){
		cnt++;
	}
	}
	if(cnt==m){
		total+=cnt;
		ate++;
		
	}		cnt=0;

}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(arr[j][i]!='S'){
		cnt++;
	}
		
	}
	if(cnt==n){
		total+=(cnt-ate);
	}
	cnt=0;
}
cout<<total;
return 0;
}