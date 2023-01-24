#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int p,q,n;
 string s;
 cin>>n>>p>>q;
 cin>>s;
 if(n%gcd(p,q)!=0){
  cout<<-1<<endl;}
else{
 bool test=false;
 long long int val=0;
 for(long long int i(0);i<=(n/p);i++){
  if(((n-i*p)%q==0)and((n-i*p)>=0)){
   test=true;
   val=i;break;}}
 if(test==false){
  cout<<-1<<endl;}
 else{
  cout<<(val+((n-val*p)/q))<<endl;
  long long int val1=0;
  for(long long int j(0);j<val;j++){
   cout<<(s.substr(val1,p))<<endl;
   val1+=p;}
 for(long long int d(0);d<((n-val*p)/q);d++){
   cout<<(s.substr(val1,q))<<endl;
   val1+=q;
  }}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}