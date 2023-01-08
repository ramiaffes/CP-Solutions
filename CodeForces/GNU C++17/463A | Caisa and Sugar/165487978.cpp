#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,s,x,y;
 cin>>n>>s;
 vector<pair<long long int,long long int>>vect(n);
 long long int ans=-1;
 long long int val=0;
 for(long long int i(0);i<n;i++)cin>>vect[i].first>>vect[i].second;
 for(long long int i(0);i<n;i++){
  if(s>vect[i].first){
   ans=max(ans,(100-vect[i].second)%100);
   }
  else if((s==vect[i].first)and(vect[i].second==0)){
   ans=max(ans,val);}
   }
 if(ans==-1)cout<<-1<<endl;
 else cout<<ans<<endl;
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}