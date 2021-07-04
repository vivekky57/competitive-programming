#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int Q,x,y;
    cin>>Q;
    while(Q--){
        cin>>y; cin>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            set<int>::iterator it=s.find(x);
            if(it==s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }   
    return 0;
}
