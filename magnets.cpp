#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int groups = 0;
	long long n;
	cin>>n;
	string a[n];
	for(int i = 0;i<n;i++){cin>>a[i];}
	for(int i = 0;i<n;i++){
		if(a[i] != a[i+1]){
			groups++;
		}
	}
	cout<<groups<<"\n";
	return 0;
}