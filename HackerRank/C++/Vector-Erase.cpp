#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    cin>>n;
    vector<int> v;
    for (int i = 0;i <n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    int q,q1;
    cin>>q;
    v.erase(v.begin()+q-1);
    cin>>q>>q1;
    v.erase(v.begin()+q-1,v.begin()+q1-1);
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;
}
