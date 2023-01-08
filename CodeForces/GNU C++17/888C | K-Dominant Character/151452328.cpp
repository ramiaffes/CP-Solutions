#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0;
int main()
{
 fast; 
 string s;
 long long int n,m,k,x,y;
    cin>>s;
    map<char,vector<long long int>>hashing;
    set<char>res;
    for(long long int i(0);i<s.length();i++){
  hashing[s[i]].push_back(i);
  res.insert(s[i]);}
 long long int ans1=1e9;
 for(auto v:res){
  vector<long long int>res23;
  for(long long int i(0);i<s.length();i++){
   auto it=lower_bound(hashing[v].begin(),hashing[v].end(),i);
   if(it==hashing[v].end()){
    long long int val100=res23[res23.size()-1];
    res23.pop_back();
    res23.push_back(val100+s.length()-i);break;}
   else{
    long long int val=*it;
    res23.push_back(val-i+1);}}
   auto it2=max_element(res23.begin(),res23.end());
   ans1=min(ans1,*it2);}
 cout<<ans1<<endl;
 
 
 
    
 
 
 
 
    
return 0;} 