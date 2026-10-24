#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	string t;
	cin>>s;
	cin>>t;
	reverse(s.begin(),s.end());
	if(t==s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}