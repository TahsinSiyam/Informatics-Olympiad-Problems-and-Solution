#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	string s;
	int danik = 0;
	int anton = 0;
	cin>>n>>s;
	for(char c: s){
		if(c == 'A'){
			anton++;
		}
		else{
			danik++;
		}
	}
	if(danik>anton){
		cout<<"Danik"<<"\n";
	}
	else if(anton>danik){
		cout<<"Anton"<<"\n";
	}
	else{
		cout<<"Friendship"<<"\n";
	}
	return 0;
}