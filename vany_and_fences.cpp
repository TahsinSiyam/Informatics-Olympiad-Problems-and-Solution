#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, h;
	cin>>n>>h;
	int heights[n];
	int width = 0;
	for(int i = 0;i<n;i++){cin>>heights[i];}
	for(int i = 0; i<n;i++){
		if(heights[i]>h){
			width += 2;
		}
		else{
			width += 1;
		}
	}
	cout<<width<<"\n";
	return 0;
}