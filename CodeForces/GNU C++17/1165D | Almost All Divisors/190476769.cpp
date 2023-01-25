#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool is_prime(long long int num){
 if(num==1)return false;
 for(long long int i(2);i<=sqrt(num);i++){
  if(num%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){cin>>n;
  vector<long long int>vect(n);
  vector<long long int>result;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  if(n==1){
   if(is_prime(vect[0]))
   cout<<(vect[0]*vect[0])<<endl;
   else cout<<-1<<endl;}
   else{
  sort(vect.begin(),vect.end());
  long long int res=vect[0]*vect[n-1];
  long long int i;
  for(i=2;i<sqrt(res);i++){
   if(res%i==0){result.push_back(i);
   result.push_back(res/i);}}
  if(i*i==res)result.push_back(i);
  sort(result.begin(),result.end());
  if(result==vect)cout<<res<<endl;
  else cout<<-1<<endl;}
  
  }
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}