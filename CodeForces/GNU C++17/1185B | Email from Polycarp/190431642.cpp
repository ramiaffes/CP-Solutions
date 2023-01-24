#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n;
string s;
string s1;
string t;
cin>>n;
for(long long int j(0);j<n;j++){
 cin>>s;
 cin>>t;
 
 vector<long long int>res1;
 vector<long long int>res2;
 long long int som=1;
 for(long long int i(0);i<(s.length()-1);i++){
  if(s[i]==s[i+1]){som++;}
  else{res1.push_back(som);
   som=1;
   }}
  res1.push_back(som);
 som=1;  
 for(long long int i(0);i<(t.length()-1);i++){
  if(t[i]==t[i+1]){som++;}
  else{res2.push_back(som);
   som=1;
   }}
  res2.push_back(som);
 bool test=true;
 auto it=unique(s.begin(),s.end());
 auto it2=unique(t.begin(),t.end());
 s.resize(distance(s.begin(), it));
 t.resize(distance(t.begin(), it2));
 long long int i=0;
 if(res1.size()!=res2.size()){
  test=false;}
 else{
 while((i<res1.size())and(res1[i]<=res2[i])){
  i++;
  }
 if(i!=res1.size()){test=false;}}
 if((s==t)and(test==true)){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}