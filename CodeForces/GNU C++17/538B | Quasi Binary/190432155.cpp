#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
int main()
{
 fast;
 
 string n;
 cin>>n;
 vector<long long int>res(n.length());
 string res1;
 vector<string>res2;
 for(long long int i(0);i<n.length();i++){
  res[i]=n[i]-'0';
 }
 bool test=true;
 while(test==true){
 res1.clear();
 test=false;
 for(long long int i(0);i<n.length();i++){
  if(res[i]!=0){
   res[i]--;
   test=true;
   res1.append("1");}
 else if(test==true){
  res1.append("0");}}
  res2.push_back(res1);}
res2.pop_back();
cout<<res2.size()<<endl;
for(auto v:res2)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}