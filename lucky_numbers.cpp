// 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777

#include <bits/stdc++.h>
// Solution for A Lucky Number
using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int index = 0;
	while(true){
		if(n%arr[index]==0){
			cout<<"YES";
			break;
		}
		else{
			index++;
		}
	}
	return 0;
}