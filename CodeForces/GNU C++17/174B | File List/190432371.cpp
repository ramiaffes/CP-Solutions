#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
long long int N=1000;
map<long long int,pair<long long int,long long int>>m;
int main()
{
 fast;
 long long int k;
 string s;
 cin>>s;
 vector<long long int>res;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='.'){
   res.push_back(i);}}
if(res.empty()){
 cout<<"NO"<<endl;}
else{
bool test=true;
long long int val=-1;
long long int val1=0;
long long int som=0;
long long int i=0;
 while((i<s.length())and(s[i]!='.')){
  som++;i++;
  }
if((som>8)or(som<1)or(i==s.length()))test=false;
else{
for(long long int i(0);i<(res.size()-1);i++){
 val1=val+1;
 long long int d=res[i+1]-res[i]-1;
 if((d>11)or(d<2)){
  test=false;break;
  }
 for(long long int i(1);i<d;i++){
  if(((d-i)<=8)and(i<=3)){val=i;
   break;
   }}
 m[res[i]]=(make_pair(val1,res[i]+val));
 val+=res[i];
 }
 val++;
  i=val;
  som=0;
 while((i<s.length())and(s[i]!='.')){
  som++;i++;
  }
 if(i==s.length())test=false;
 else{
  if((som<1)or(som>8))test=false;
  else{
   long long int j=i+1;
   if(((s.length()-j)<1)or((s.length()-j)>3)){
    test=false;}
   else{
    m[res[res.size()-1]]=make_pair(val,s.length()-1);}
   }}}
if(test==false)cout<<"NO"<<endl;
else {cout<<"YES"<<endl;
 for(auto v:m){
  string s1=s.substr(v.second.first,v.second.second-v.second.first+1);
  cout<<s1<<endl;}}}
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}