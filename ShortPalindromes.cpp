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


      if(solve("RACE") == ("ECARACE")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("TOPCODER") == ("REDTOCPCOTDER")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("Q") == ("Q")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("MADAMIMADAM") == ("MADAMIMADAM")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ALRCAGOEUAOEURGCOEUOOIGFA") == ("AFLRCAGIOEOUAEOCEGRURGECOEAUOEOIGACRLFA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ABCDEFG") == ("ABCDEFGFEDCBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("GFEDCBA") == ("ABCDEFGFEDCBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AAAAA") == ("AAAAA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AAAAAB") == ("BAAAAAB")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ABBBBB") == ("ABBBBBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("GECABDF") == ("FDBACEGECABDF")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ACEGFDB") == ("ABCDEFGFEDCBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ABCDAA") == ("AABCDCBAA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("CA") == ("ACA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("EDD") == ("EDDE")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("BEDA") == ("ABDEDBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("BEABB") == ("BBAEABB")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("DEABCB") == ("DEABCBAED")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AECEABA") == ("ABAECEABA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("EEDBDEDA") == ("ADEEDBDEEDA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ACBAAADCC") == ("ACBCDAAADCBCA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ACCCCCCBDA") == ("ADBCCCCCCBDA")) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("ACDBABDCCDB") == ("ABDCCDBABDCCDBA")) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("BDDAABCAEAAB") == ("BADDAEABCBAEADDAB")) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("BBCADBCEBBECD") == ("BBCADBCEBBECBDACBB"	)) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("BCCAADEBCEEBAA") == ("BCCAADEBCEECBEDAACCB")) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("EDCCCECEBACDEBD") == ("DBEDCABCCECECCBACDEBD")) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("CECCDBBBBDBDBCBB") == ("BBCBECCDBDBBBDBDCCEBCBB"		)) cout << "pass" << endl; else  cout << "fail" << endl;



   if(solve("BBEDBAEEDEACEDDAC") == ("BBCADDECDBAEDEDEABDCEDDACBB")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AEABEDBDBBADEECEDC") == ("ACDEABCEEDABBDBBADEECBAEDCA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AABEDDEBBDBCECDCADD") == ("AABDEDACDCEBCBDBCBECDCADEDBAA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ACCADCCDCDDBBEDACBCB") == ("ABCBCADCCEBBDCDCDBBECCDACBCBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("BEAEDAADADDDDBDDCCABD") == ("DBEACCEDAADABDDDDBADAADECCAEBD")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AEEECABCBEAEBBCCACDAEC") == ("ACEADEECABCCBBEAEBBCCBACEEDAECA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AEADACEBABCCBDBAEDCCCBC") == ("ACBCCCDEABDABCCEBABECCBADBAEDCCCBCA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("AADEDEBECDCDEBCCECCEACCC") == ("ACCCADECCDECCBECDCDCEBCCEDCCEDACCCA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("CBDDECBEDCEBEEEAEBCCAEEAE") == ("CBDDEACBEDCEACCBEAEEAEBCCAECDEBCAEDDBC")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("HMDCDJKWHWMEDBKWJEKRFHLO") == ("OLHFMDCDRKEJWKBDEMWHWMEDBKWJEKRDCDMFHLO")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("MWRQIGJTGNKPBHKXQGIIECSF") == ("FMSCEIWRQIGJQTGNXKHBPBHKXNGTQJGIQRWIECSMF")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("PXVXFOVOXFXUNVKQSVBLTGNL") == ("LNGPTLBVSQKXVNUXFXOVOXFXUNVXKQSVBLTPGNL")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("QTQDDSEJHKMAVPVVRSITDMMM") == ("MMMDQTIQDDSEJHKMARVPVPVRAMKHJESDDQITQDMMM")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("UZOUZENQJTNWLRNBTABSNHHZA") == ("AUZHHOUZENQJSBATBNRLWLRNBTABSJQNEZUOHHZUA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("EOFYITMBCPSKYNAIBHGVIGFBT") == ("EOFYITMBCFGPSKYNAIBHGVGHBIANYKSPGFCBMTIYFOE")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("LVJYMTWWFPUAJGFAENQAITSUW") == ("LVJYMTWWFPUAJGFSTIAENQNEAITSFGJAUPFWWTMYJVL")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ZNRDGCMXQCSHEIRSONFBOZDFQ") == ("QFDZOBFNOSRDGIEHSCMQXQMCSHEIGDRSONFBOZDFQ")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ALRCAGOEUAOERGCOEUOOIGFA") == ("AFLRCAGIOEOUAEOCEGRGECOEAUOEOIGACRLFA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ALRCAGOEUAOEURGCOEUOOIGFA") == ("AFLRCAGIOEOUAEOCEGRURGECOEAUOEOIGACRLFA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ALRCAGOEUAOEXXGCOEUOOIGFA") == ("AFLRCAGIOEOUAEOCEGXXGECOEAUOEOIGACRLFA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ALRCAGOEUAOEXXXCOEUOOIGFA") == ("AFLRCAGIOEOUAEOCEXXXECOEAUOEOIGACRLFA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ABACADAFAGAFAHAJAKABA") == ("ABACKADJAHAFAGAFAHAJDAKCABA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("ABACADAEAFAGAHAIAJAKAL") == ("ABLACKADJAEIAFHAGAHFAIEAJDAKCALBA")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("SDGBIULGIBNEROJOPGERG") == ("GRESDGPOJORENBIGLULGIBNEROJOPGDSERG")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("TOPCODER") == ("REDTOCPCOTDER")) cout << "pass" << endl; else  cout << "fail" << endl;

   if(solve("GOOGLE") == ("ELGOOGLE"	)) cout << "pass" << endl; else  cout << "fail" << endl;
    return 0;
}
