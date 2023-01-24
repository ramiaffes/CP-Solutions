#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 cin>>n;
 string s;
 cin>>s;
 map<char,long long int>hashing;
 map<char,long long int>vis;
 for(long long int i(0);i<n;i++){
  hashing[s[i]]++;}
 for(long long int i(0);i<n;i++){
  if((hashing[s[i]]>(n/3))and(hashing['0']<(n/3))){hashing[s[i]]--;
   s[i]='0';
   hashing['0']++;
   }
  else if((hashing[s[i]]>(n/3))and(hashing['1']<(n/3))and(s[i]=='2')){hashing[s[i]]--;
   s[i]='1';
   hashing['1']++;}
  else if((hashing[s[i]]>(n/3))and(hashing['1']<(n/3))and(s[i]=='0')){vis[s[i]]++;
   if(vis[s[i]]>=(n/3+1)){
   hashing[s[i]]--;
   s[i]='1';
   hashing['1']++;
   
    }
   }
  else if((hashing[s[i]]>(n/3))and(hashing['2']<(n/3))){vis[s[i]]++;
   if(vis[s[i]]>=(n/3+1)){
   hashing[s[i]]--;
   s[i]='2';
   hashing['2']++;
   
    }}}
 cout<<s<<endl;
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}