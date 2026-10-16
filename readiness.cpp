// It is called 'Prefix Sums'

// This Algorithm makes the Sum of Every Single Element in the Array and From this we can use the sum we need.

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int nums[n];
	for(int i = 0;i<n;i++){cin>>nums[i]};
	for(int i = 1;i<n;i++){
		nums[i] += nums[i-1];
	}

	return 0;
}