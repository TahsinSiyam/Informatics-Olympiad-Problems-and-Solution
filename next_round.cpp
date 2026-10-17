#include <bits/stdc++.h>

using namespace std;
// Next Round Problem Won't be solved
int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int allFailers = 0;
	int n, k;
	cin>>n>>k;
	int scores[n];
	int qualifiers = 0;
	for(int i = 0;i<n;i++){cin>>scores[i];}
	for(int i = 0;i<n;i++){
		if(scores[i] == 0){
			allFailers++;
		}
	}
	if(allFailers==n){
		cout<<0<<"\n";
		return 0;
	}

	for(int i = 0;i<n;i++){

		if(scores[i]>=scores[k-1] && scores[i] != 0){
			qualifiers++;
		}
	}
	cout<<qualifiers<<"\n";
	return 0;
}