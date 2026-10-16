#include <bits/stdc++.h>

using namespace std;
//Soluition for 1829A
int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	string target = "codeforces";
	while(t--){
		int indices = 0;
		string s;
		cin>>s;
		for(int i = 0; i<10;i++){
			if(s[i]!=target[i]){
				indices++;
			}
		}
		cout<<indices<<"\n";
	}
	
	return 0;
}