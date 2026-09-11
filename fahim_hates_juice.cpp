#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m;
    long long o;

    cin>>m>>o;
    int diff = 0;
    if(m<o){
    	diff = o-m;
    	cout<<o-diff<<"\n";
    }
    else if(m>o){
    	diff = m-o;

    	cout<<m-diff<<"\n";
    }
    else{
    	diff = m-o;
    	cout<<o<<"\n";
    }

 
	return 0;
}