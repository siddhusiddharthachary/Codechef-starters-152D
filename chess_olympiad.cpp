#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int games = 4, teamA = 0, teamB = 0,one,two,three;
	cin>>one;
	cin>>two;
	cin>>three;
    teamA += 1 * one;
    teamA += 1 * two;
    teamB += 1 * two;
    teamB += 1 * three;
    
    games -= (one + two+ three);
    
    if((teamA + games) > teamB){
        cout<<"Yes";
        return 0;
    }
        cout<<"No";
	
	

}
