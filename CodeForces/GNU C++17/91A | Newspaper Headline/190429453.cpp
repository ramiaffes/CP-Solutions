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
 string s1;
 string s2;
 cin>>s1;
 map<char,vector<long long int>>res;
 for(long long int i(0);i<s1.length();i++){
  res[s1[i]].push_back(i);}
 cin>>s2;
 bool test=true;
 long long int som=1;
 long long int val=-1;
 for(long long int i(0);i<(s2.length()-1);i++){
  if(res[s2[i]].empty()){
   test=false;break;}
 if(res[s2[i+1]].empty()){
   test=false;break;}
 auto it=lower_bound(res[s2[i]].begin(),res[s2[i]].end(),val+1);
 val=res[s2[i]][it-res[s2[i]].begin()];
 auto it1=lower_bound(res[s2[i+1]].begin(),res[s2[i+1]].end(),val+1);
 if(it1==res[s2[i+1]].end()){
  som++;
  val=-1;
  }
 }
if(test==false)cout<<-1<<endl;
else{
 cout<<som<<endl;}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}