#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string, string> rem;

bool isPallindrom(string s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]) return false;
    }
    return true;
}

string solve(string s){
    if(rem.count(s)){
        //cout << s << ", " << rem[s] << endl;
        return rem[s];
    }
    if(isPallindrom(s)){
        rem[s] = s;
        return s;
    }
    int n = s.length();
    string s1, s2;
    if(s[0]==s[n-1]){
        s1 = solve(s.substr(1,n-2));
        rem[s] = s[0] + s1 + s[0];
        return rem[s];
    }else{
        s1 = solve(s.substr(1,n-1));
        s2 = solve(s.substr(0,n-1));
        s1 = s[0] + s1 + s[0];
        s2 = s[n-1] + s2 +  s[n-1];
        if(s1.length() < s2.length()){
            rem[s] = s1;
        }else if(s1.length() > s2.length()){
            rem[s] = s2; ;
        }else{
            if(s1.compare(s2) < 0){
                rem[s] = s1;;
            }else{
                rem[s] = s2;
            }
        }
    }
    return rem[s];
}

int main(){
    cout << solve("ALRCAGOEUAOEURGCOEUOOIGFA") << endl;

    return 0;
}
