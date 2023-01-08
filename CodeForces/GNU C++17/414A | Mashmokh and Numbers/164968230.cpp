#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int n,k;
 string s;
 cin>>n>>k;
 bool test=false;
 if(n%2==1){n--;test=true;}
 if((n==0)and(k!=0)){
     cout<<-1<<endl;
 }
 else if(n==0){
     cout<<1<<endl;
 }
 else if(k<(n/2)){
  cout<<-1<<endl;}
 else{
  vector<long long int >res;
  for(long long int i(1);i<(n-1);i++){
   res.push_back(i);}
  long long int val=n-1;
  while(val%(k-(n-2)/2)!=0){
   val++;}
  res.push_back(val);
  res.push_back((val/(k-(n-2)/2)+1)*(k-(n-2)/2));
  if(test==true)res.push_back(1e9);
  for(auto v:res)cout<<v<<" ";}
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}