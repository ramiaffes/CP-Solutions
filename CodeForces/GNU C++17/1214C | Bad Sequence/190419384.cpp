#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int k,n;
 cin>>n;
 string s;
 cin>>s;
 map<char,long long int>vis;
 vector<char>res;
 for(long long int i(0);i<n;i++){
  if(s[i]=='(')res.push_back(s[i]);
  else {
   if(res.empty())vis[')']+=1;
   else{
    res.pop_back();}
   }
  }
 if((vis[')']==0)){
  if(res.empty()){
  cout<<"Yes"<<endl;}
  else{
   cout<<"No"<<endl;} }
 else  if(vis[')']==1){
  if(res.size()==1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;}
 else{
  cout<<"No"<<endl;}
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 