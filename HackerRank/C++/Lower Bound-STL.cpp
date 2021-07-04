#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    int query,q,Flag=false;
    int low,high,mid;
    vector<int>::iterator lower;
    cin>>query;
    while(query--){
        cin>>q;
        lower = lower_bound(v.begin(),v.end(),q);
        low=0;high=n-1;
        
        while(low<=high){
            mid=(low+high)/2;
            if (q==v[mid]){
                Flag= true;
                break;
            }
            else if (q<v[mid]){
                high=mid-1;
            }
            else{
                low= mid+1;
            }
            
        }
        if(Flag == true){
            cout<<"Yes ";
        }
        else{
            cout<<"No ";
        }
        cout<<lower-v.begin()+1<<endl;
        Flag = false;
    }
    
    return 0;
}
