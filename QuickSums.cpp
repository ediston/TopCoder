
#include<iostream>
#include<string>
#include <stdlib.h>
#include <string.h>
#include<map>
#define INF 999999999

using namespace std;
int memo[12][12][102];
map <string, int> si;
long long iter;
int stoi(string s)
{
    iter++;
    if(si.count(s)){
            return si[s];

    }

    int res = 0; // Initialize result

    // Iterate through all characters of input string and update result
    for (int i = 0;  i<s.length(); i++)
        res = res*10 + s[i] - '0';

    // return result.
    si[s] = res;
    return res;
}

int solve(string numbers, int i, int j, int s) {
    if(memo[i][j][s] >= 0) return memo[i][j][s];
    if(i == j) {
        if (numbers[i]-'0' == s)
            return memo[i][j][s] = 0;
        else
            return memo[i][j][s] = INF;
    }
    // the whole word match!
    if(stoi(numbers.substr(i, j-i+1)) == s)
        return memo[i][j][s] = 0;
    int res = INF;
    for(int k = i; k < j; ++k) {
        int left  = stoi(numbers.substr(i,k-i+1));
        if(left <= s){
            int sol = 1+solve(numbers, k+1, j, s-left);
            if(sol < res) res = sol;
        }
    }
    return memo[i][j][s] = res;
}

int minSums(string numbers, int sum) {
  memset(memo, -1, sizeof(memo));
  int res = solve(numbers, 0, numbers.length()-1, sum);
  if(res == INF) return -1;
  return res;
}

bool possibleWithPluses(string s, int targetx, int maxplus){
    // put one plus before position from 1 to n-1
    // check if possible to get targetx using maxplus
    // record tried s, targetx and maxplus
    if(targetx<0 || maxplus > s.length()-1) return false;
    if(maxplus==0 || s.length()<=1){
            //cout << s << "," << targetx << "," << maxplus << endl;
            return stoi(s)==targetx;
    }

    for(int i=1; i<s.length(); i++){
        if(possibleWithPluses(s.substr(i), targetx - stoi(s.substr(0,i)), maxplus-1)){
            //cout << " possible: " << i << " - " << s << "," << targetx << "," << maxplus << endl;
            return true;
        }
        //else if(maxplus>7) cout << "not possible: " << i << " - " << s << "," << targetx << "," << maxplus << endl;
    }
    return false;
}



int mymethod(string s, int x){
     int n = s.length();

	// store an array with max possible length of s
	int sum[10][10] = {0};
	// sum[i][y] ==> y pluses before i
	int minp = 11;
	// insert one plus and check among all the pluses before what is the new sum
	// DP to store the result
	for(minp=0; minp<s.length(); minp++){
		if(possibleWithPluses(s, x, minp)){
            break;
		}
	}
	if(minp==s.length())
        return -1 ;
    else
        return minp ;

}
int main(){
	// given a string s and an int x
	// find the minimum number of '+' required to put in s
	// so that x can be formed
	string s = "0123456789";
	int x = 45;
	iter = 0;
    cout << mymethod(s,x) ;
    cout << ", with counts = " << iter << endl;
    iter = 0;
    cout << minSums(s,x);
    cout << ", with counts = " << iter << endl;
	return 0;
}
