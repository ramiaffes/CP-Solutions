#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool verif(long long int a,long long int b){
 if((a%2==0)and(b%2==0))return false;
 if((a==1)or(b==1)) return true;
 if((a%b==0)or(b%a==0))return false;
 for(long long int j(3);j<=max(sqrt(a),sqrt(b));j+=2){
  if(((b%j==0)and(j<=sqrt(b))and(a%(b/j)==0))or((a%j==0)and(j<=sqrt(a))and(b%(a/j)==0))or((b%j==0)and(a%j==0)))return false;
  }
 return true;}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>result;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int som=0;
 result.push_back(vect[0]);
 for(long long int i(0);i<(n-1);i++){
  if(!verif(vect[i],vect[i+1])){
   som++;
   result.push_back(1);
   result.push_back(vect[i+1]);
   }
  else{
   result.push_back(vect[i+1]);
   }}
  cout<<som<<endl;
  for(auto v:result){
   cout<<v<<" ";}
 
 
  
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}