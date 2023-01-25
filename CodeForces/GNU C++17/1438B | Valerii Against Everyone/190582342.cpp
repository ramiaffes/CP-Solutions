#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n;
  cin>>t;
  while(t--){
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
   sort(vect.begin(),vect.end());
   bool test=false;
   for(long long int i(0);i<(n-1);i++){    
    if(vect[i]==vect[i+1]){
     test=true;
     break;}
    }
   cout<<(test?"YES":"NO")<<endl;
   
  }
  
   
  
  
    return 0;
}