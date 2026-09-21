#include <bits/stdc++.h>
// Its Incorrect
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
  	cin>>n;
	vector<int> a(n);
	for(int i = 0;i<3;i++){int temp; cin>> temp; a.push_back(temp);}
	sort(a.begin(),a.end());
	cout<<a[0]<<"\n";
	return 0;
}