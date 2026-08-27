#include <bits/stdc++.h>

using namespace std;

int fibDP(int n, vector<int> &f){
	if(n<=1) return n;
	if(f[n] =! -1){
		return f[n];
	}

	return f[n] = fibDP(n-1,f)+fibDP(n-2,f);
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int num = 6;
	vector<int> f(num+1,-1);
	cout<<fibDP(num,f)<<endl;

	return 0;
}