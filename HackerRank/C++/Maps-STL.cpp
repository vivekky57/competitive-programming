#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m;
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        string str;
        int x;
        if(n==1){
            cin>>str;
            cin>>x;
            map<string,int>::iterator it = m.find(str);
            if (it==m.end()){
                m.insert(make_pair(str,x));
            }
            else {
                it->second = it->second+x;
            }
        }
        else if (n==2) {
            cin>>str;
            m.erase(str);
        }
        else{
            cin>>str;
            map<string,int>::iterator it = m.find(str);
            if (it==m.end()){
                cout<<"0"<<endl;
            }
            else{
                cout<<it->second<<endl;
            }
           
        }
       
    }
    return 0;
    
}



