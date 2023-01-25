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
    long long int t,a,b,x,y,n;
  
    cin>>t;
    while(t--){  
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
   for(long long int i(0);i<n-1;i+=2){
    cout<<-vect[i+1]<<" "<<vect[i]<<" ";}
   cout<<endl;
  }
                
                
           
        
 
        
        
    
  
   
 
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}