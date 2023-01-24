#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
int main()
{
 fast;
 long long int n,m,k,l,r;
 string s;
 cin>>s;
 cin>>m;
 for(long long int  i(0);i<m;i++){
  cin>>l>>r>>k;
  l--;
  r--;
  string str=s.substr(0,l);
  string str2=s.substr(r+1,s.length()-r);
  string str3=s.substr(l,r-l+1);
  string resp(str3.length(),'0');
  for(long long int d(0);d<str3.length();d++){
   resp[(d+k)%(str3.length())]=str3[d];
   }
  string res;
  res.append(str);
  res.append(resp);
  res.append(str2);
  s=res;
  }
 cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}