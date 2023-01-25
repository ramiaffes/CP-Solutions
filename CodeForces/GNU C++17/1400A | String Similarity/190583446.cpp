#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    long long int t,n;
    string str;
    cin>>t;
    while(t--){
  cin>>n;
  cin>>str;
  string result;
  for(int i(0);i<(2*n-1);i+=2){
   result.push_back(str[i]);}
  cout<<result<<endl;
  }
    
    
 
    
   
    
    
    return 0;
}