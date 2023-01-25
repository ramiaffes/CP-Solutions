#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
 
int main()
{
 fast; 
 long long int t,n,d;
 string s;
 string r;
 cin>>t;
 while(t--){
  cin>>s;
  cin>>r;
  long long int jh=r.length();
  long long int dh=s.length();
  long long int ppc=jh*dh/(gcd(jh,dh));
  string ch(r);
  for(long long int i(0);i<(ppc/jh-1);i++){
   ch+=r;}
  string mh(s);
  for(long long int i(0);i<(ppc/dh-1);i++){
   mh+=s;}
  if(ch==mh)cout<<ch<<endl;
  else cout<<-1<<endl;
 
  
  
  }
  
  
 
  
 
 
 
 return 0;
}