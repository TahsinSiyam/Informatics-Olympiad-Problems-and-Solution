#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	long long nums[n];
	for(int i = 0;i<n;i++){cin>>nums[i];}
	for(int i = 0;i<n;i++){
		if(nums[i]%2 == 0){
			cout<<"even"<<"\n";

		}
		else{
			cout<<"odd"<<"\n";
		}
		

	}
	return 0;
}