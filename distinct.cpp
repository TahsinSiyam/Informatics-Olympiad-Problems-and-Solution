#include <iostream>
#include <set>

using namespace std;

int main(){

	set<long long> s;
	long long n;
	cin>>n;
	for(long long i = 0;i<n;i++){
		int num;
		cin>>num;
		s.insert(num);
	}
	cout<<s.size();
	return 0;
}