#include <bits/stdc++.h>

using namespace std;

//Solution for https://codeforces.com/problemset/problem/58/A

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    string target = "hello";
    cin>>s;
    int k = 0;
    for(int i = 0;i<s.length();i++){
 		
 		if(s[i]==target[k]){
 			k++;
 		}
     }
     if(k==5){
     	cout<<"YES\n";
     }
     else{
     	cout<<"NO\n";
     }
	return 0;
}