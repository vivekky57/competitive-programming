#include <bits/stdc++.h>

using namespace std;

//Problem statement :https://www.hackerrank.com/challenges/the-birthday-bar
// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int count=0,i=0,sum=0, temp_m=m;
    int n=s.size();
    while(i<n){
        int j=0;
        temp_m=m;
        while(temp_m-- && i+m<=n){
            sum+=s[j+i];
            j++;
            cout<<sum;
        }
        if(d==sum){
            count++;   
        }
        sum=0;
        i++;
    }
    
    return count;
}
