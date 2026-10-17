#include <bits/stdc++.h>

using namespace std;
bool endsZero(int num){
	return abs(num)%10 == 0;
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	int k;
	cin>>n>>k;
	for(int i = 0;i<k;i++){
		if(endsZero(n)){
			n = n/10;
		}
		else{
			n = n-1;
		}
	}
	cout<<n<<"\n";
	return 0;
}