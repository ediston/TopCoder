//https://community.topcoder.com/stat?c=problem_statement&pm=1259&rd=4493
//Dynamic Solution

#include<iostream>
using namespace std;
#define PLUS 1
#define MINUS 0
int main(){
	// 0<= N <=50
	// A[i] <=1000
	int a[] = 	{   374, 40, 854, 203, 203, 156, 362, 279, 812, 955,
                    600, 947, 978, 46, 100, 953, 670, 862, 568, 188,
                    67, 669, 810, 704, 52, 861, 49, 640, 370, 908,
                    477, 245, 413, 109, 659, 401, 483, 308, 609, 120,
                    249, 22, 176, 279, 23, 22, 617, 462, 459, 244 };
	int n = 50;
	/*
	cin >> n ;
	for(int i=0; i<n; i++)
		cin >> a[i];
		*/
	// we want longest zig-zag seq i.e. alternate (+,-)
	// dynamic programming O(n^2)
	int ls[50][2] = {0};
	// 0 => -, 1 => +
	int maxL = 0;
	for(int i=1; i<n; i++){
		int prev = a[i]-a[i-1];
		if(prev<0 && ls[i][MINUS]==0) ls[i][MINUS] = 2;
		else if(ls[i][PLUS]==0)ls[i][PLUS] = 2;
		for(int j=i+1; j<n; j++){
			if(prev<0 && a[j]-a[i]>0){
				if(ls[j][PLUS] < ls[i][MINUS]+1) ls[j][PLUS] =  ls[i][MINUS]+1;
				if(maxL <  ls[j][PLUS]) maxL =  ls[j][PLUS];
			}else if(prev>0 && a[j]-a[i]<0){
				if(ls[j][MINUS] < ls[i][PLUS]+1) ls[j][MINUS] =  ls[i][PLUS]+1;
				if(maxL <  ls[j][MINUS]) maxL =  ls[j][MINUS];
			}
		}
	}
	cout << maxL << endl;
	return 0;
}
