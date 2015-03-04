#include<iostream>
#include<string>
#include <stdlib.h>
#include <string.h>
#include<map>
using namespace std;
#define INF 999999999

#define MP(a,b) make_pair(a,b)

map < pair<string, int>, int > rem;

int soln(string s, int target){
    if(rem.count(MP(s, target))){
        return rem[MP(s, target)];
    }
    rem[MP(s, target)] = INF;
    if(atoi(s.c_str()) == target){
        rem[MP(s, target)] = 0;
        return rem[MP(s, target)];
    }
    string temps;
    int val = 0;
    int n = s.length();
    for(int i=0; i<n-1; i++){
        temps = s.substr(0, i+1);
        val = atoi(temps.c_str());
        if(val <= target){
            int res = 1 + soln(s.substr(i+1), target - val);
            if(res < rem[MP(s, target)]) rem[MP(s, target)] = res;
        }
    }
    return rem[MP(s, target)];
}

int solved(string s, int t){
    int res = soln(s, t);
    if(res==INF) return  -1 ;
     return res;
}

int main(){
	// given a string s and an int x
	// find the minimum number of '+' required to put in s
	// so that x can be formed
int i = 0;
if(solved("99999", 45) ==4) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1110", 3) ==3) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0123456789", 45) ==8) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("99999", 100) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("382834", 100) ==2) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("9230560001", 71) ==4) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0000000000", 0) ==0) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("111", 3) ==2) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1111111111", 10) ==9) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1212121212", 15) ==9) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1213121712", 21) ==9) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0123456789", 81) ==6) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("8833614925", 100) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0525222922", 93) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("3769558148", 99) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1210102121", 100) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0220120200", 63) ==4) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("0000000001", 1) ==0) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1000000000", 1) ==1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1000000001", 2) ==1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1000000001", 11) ==1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1001098", 100) ==2) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("99999", 100) ==-1) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("382834", 100) ==2) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1110", 3) ==3) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;


if(solved("1", 1) ==0) cout << "Passed " <<  i++ << endl; else cout << "Failed" <<  i++ << endl;

	return 0;
}
