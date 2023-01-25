#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    long long int n;
    cin>>n;
    vector<long long int>b(n);
    vector<long long int>a(n);
    for(int i(0);i<n;i++){
  cin>>b[i];
  }
 a[0]=b[0];
 for (int i(1);i<n;i++){
  a[i]=b[i]+max(a[i-1]-b[i-1],a[i-1]);}
 for(int i(0);i<n;i++){
  cout<<a[i]<<" ";}
    
    
 
    
   
    
    
    return 0;
}