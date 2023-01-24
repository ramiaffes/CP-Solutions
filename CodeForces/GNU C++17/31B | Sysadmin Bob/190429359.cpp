#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int n,k;
 string s;
 cin>>s;
 if((s[0]=='@')or(s[s.length()-1]=='@')or(s.find('@')==string::npos)){
  cout<<"No solution"<<endl;}
else{
 long long int j=s.length()-1;
 while(s[j]!='@'){
  j--;}
 string s1;
 bool test=true;
 string var(1,s[0]);
 s1.append(var);
 vector<string>res;
 for(long long int i(1);i<s.length();i++){
  if((s[i]=='@')and(s1.empty())){test=false;break;}
  else if(s[i-1]=='@'){
   if(s[i]=='@'){test=false;break;}
   else if(i!=(j+1)){
    string var(1,s[i]);
       s1.append(var);
   res.push_back(s1);
   s1.clear();
    }
   else{
     string var(1,s[i]);
       s1.append(var);
   }}
 else{string var(1,s[i]);
  s1.append(var);}
  
  }
 res.push_back(s1);
if(test==false)cout<<"No solution"<<endl;
else{
 for(long long int i(0);i<(res.size()-1);i++){cout<<res[i];
 cout<<',';}
 cout<<res[res.size()-1]<<endl;}
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}