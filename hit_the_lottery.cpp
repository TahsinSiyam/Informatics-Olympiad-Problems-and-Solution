#include <bits/stdc++.h>

using namespace std;

int main(){

 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	long long n;
 	cin>>n;
 	long long target = n;
 	int cashes[] = {100,20,10,5,1};
 	int turns = 0;
 	for(int i = 0;i<5;i++){
 		turns += n/cashes[i];
 		n %= cashes[i];
 	}
 	cout<<turns<<"\n";
 	return 0;
}