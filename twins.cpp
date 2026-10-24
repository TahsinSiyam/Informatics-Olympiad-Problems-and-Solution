#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int totalSum = 0;
	int my_sum = 0; 
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){cin>>arr[i]; totalSum += arr[i];}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	int count = 0;
	for(int i = 0;i<n;++i){
		my_sum += arr[i];
		count++;
		int remaining_sum = totalSum - my_sum;
		if(my_sum>remaining_sum){
			break;
		}
	}	
	cout<<count<<"\n";
	return 0;
}