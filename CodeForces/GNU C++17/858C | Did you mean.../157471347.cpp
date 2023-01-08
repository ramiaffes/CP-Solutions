#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,k,t;
    cin>>s;
    set<char>res;
    string res1;
    long long int val=0;
    string s2="aeiou";
    for(long long int i(0);i<s.length();i++){
  if(s2.find(s[i])==string::npos){
  res.insert(s[i]);val++;
  string var1(1,s[i]);
  if((res.size()>=2)and(val>=3)){
   val=1;
   res.clear();
   res.insert(s[i]);
   res1.append(" ");
   res1.append(var1);
   }
  else{
   string var(1,s[i]);
   res1.append(var);}}
  else{
   res.clear();
   val=0;
   string var(1,s[i]);
   res1.append(var);}
  }
 cout<<res1<<endl;
 
    
return 0;} 