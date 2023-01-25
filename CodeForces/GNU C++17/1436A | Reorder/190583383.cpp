#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool sortbysecasc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}
int main() {
 fast;
    long long int t,n,m,som;
  
    cin>>t;
    while(t--){  
  cin>>n>>m;
  som=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   som+=vect[i];
   }
  if(som==m){
   cout<<"YES"<<endl;}   
  else{
   cout<<"NO"<<endl;}
   
   
 }
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}