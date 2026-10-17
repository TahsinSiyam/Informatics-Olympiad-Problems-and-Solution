#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x;
	int sizeofSteps[] = {5,4,3,2,1};
	long long steps = 0;
	cin>>x;
	for(int i = 0;i<5;i++){
		steps += x/sizeofSteps[i];
		x %= sizeofSteps[i];
	}
	cout<<steps<<"\n";
	
	return 0;
}