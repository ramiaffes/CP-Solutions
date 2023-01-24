#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int k,n;
 string s;
 string s1;
 cin>>k;
 cin>>s;
 cin>>n; long long int val;
char c1;
string t;
for(long long int i(0);i<k;i++){
 t.append(s);}
 map<char,vector<long long int>>res;
 for(long long int i(0);i<s.length();i++){
  for(long long int j(0);j<k;j++){
   res[s[i]].push_back(i+j*s.length());
   }}
for(auto v:res){
 sort(res[v.first].begin(),res[v.first].end());}
 for(long long int i(0);i<n;i++){
  cin>>val>>c1;
  long long int val2=res[c1][val-1];
  t[val2]='.';
  res[c1].erase(res[c1].begin()+val-1);
 
  }
for(long long int i=0;i<t.length();i++)
  if(t[i]!='.')
   cout << t[i];
 
 cout <<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}