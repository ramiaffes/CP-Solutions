#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int ,long long int>hashing;
int main()
{
 fast;
 
 long long int n,l;
 string s;
 getline(cin, s);
 string s1;
 for(long long int i(0);i<(s.length()-1);i++){
  if((s[i]==s[i+1])and((s[i+1]==' '))){
   continue;}
  else if((s[i]==' ')and((s[i+1]=='?')or(s[i+1]=='.')or(s[i+1]==',')or(s[i+1]=='!'))){
   continue;}
 string var(1,s[i]);
 s1.append(var);
 if(((s[i]=='?')or(s[i]=='.')or(s[i]==',')or(s[i]=='!'))and(s[i+1]!=' ')){
   s1.append(" ");}}
 string var(1,s[s.length()-1]);
 s1.append(var);
cout<<s1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}