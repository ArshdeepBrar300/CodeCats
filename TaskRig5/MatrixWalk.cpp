#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;cin>>n;
    int arr[n][n];
    int t=1;
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=0;j<=i&& k>=0;j++,k--){
            arr[j][k]=t;t++;
        }
        
    }

    
    for(int i=1;i<n;i++){
        int k=n-1;
        for(int j=i;j<n;j++,k--){
            arr[j][k]=t;t++;
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
