#include <bits/stdc++.h>

using namespace std;

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int n=arr.size();
    int temp[n],k=INT_MIN,j;
    for(int i=0;i<n;i++){
        temp[i]=0;   
    }
    for(int i=0;i<n;i++){ 
        
            temp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(temp[i]>k){
                k=temp[i];
                j=i;
            }
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
return j;
}
