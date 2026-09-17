#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){cin>>a[i];}
	int index = n;
	for(int i = 0;i<n/2;i++){
		swap(a[i],a[index-1]);
	}
	cout<<a[n-1]<<"\n";
	return 0;
}