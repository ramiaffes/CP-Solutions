#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int k,a,b;
 string s;
 cin>>k>>a>>b;
 cin>>s;
 if(((s.length()-(k)*a)>(b-a)*(k))or(s.length()<k*a)){
  cout<<"No solution"<<endl;
}
else{
 long long int som=0;
 vector<long long int>res(k);
 for(long long int i(0);i<(k);i++){
  res[i]=a;
  }
 while(som<(s.length()-(k*a))){
  for(long long int i(0);i<(k);i++){
  if(res[i]<b){
  res[i]+=1;
  som++;
  if(som==(s.length()-(k*a)))break;}
  }}
 long long int val=0;
 long long int i=0;
 while(val<s.length()){
  string var=s.substr(val,res[i]);
  cout<<var<<endl;
  val+=res[i];
  i++;}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}