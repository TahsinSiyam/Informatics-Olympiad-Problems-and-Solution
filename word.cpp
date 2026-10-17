#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int upperCount = 0;
    int lowerCount = 0;
    for(char c: s){
        if(isupper(c)){
            upperCount++;
        }
        else if(islower(c)){
            lowerCount++;
        }
    }
    if(upperCount==lowerCount){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else if(upperCount>lowerCount){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s<<"\n";

    return 0;
}