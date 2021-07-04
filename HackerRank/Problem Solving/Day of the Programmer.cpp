#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string res;
    if(1700<=year && year<=1917){
        if(year%4==0){
            res = "12.09."+to_string(year);
        }
        else{
            res = "13.09."+ to_string(year);
        }
    }
    else if (year==1918) {
    res = "26.09."+ to_string(year);
    }
    else if (year>=1919) {
        if(year%400==0 || (year%4==0 && year%100!=0) ){
            res = "12.09."+to_string(year);
        }
        else{
            res = "13.09."+ to_string(year);
        }
    }
    else{
        res = "13.09."+ to_string(year);   
    }
    
    return res;
}
