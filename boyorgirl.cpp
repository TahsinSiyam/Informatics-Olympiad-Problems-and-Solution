#include <iostream>

using namespace std;

int main(){
	string name;
	cin>>name;

	if(name.length()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}