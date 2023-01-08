#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 string s;
 cin>>s;
 string ans(s.length(),'9');
 vector<string>res;
 for(long long int i(0);i<=9;i++){
  string s1;
  s1=s;
  for(long long int d(0);d<n;d++){
   s1[d]=((s1[d]-'0'+i)%10+'0');
    }
  
 for(long long int d1(0);d1<n;d1++){
  char val=s1[0];
  s1.erase (0,1);
  s1.push_back(val);
  ans=min(ans,s1);
  }
}
cout<<ans<<endl;
 
 
  
  
  
  
  
  
 
 
    
return 0;}