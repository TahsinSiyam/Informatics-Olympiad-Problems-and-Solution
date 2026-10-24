#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	double sum = 0;
	for(int i = 0;i<n;i++){
		double d;
		cin>>d;
		sum += d;
	}
	
	cout << fixed << setprecision(12) << sum / n << endl;
	
	return 0;
}