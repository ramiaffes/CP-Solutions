#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,long long int>hashing;
int main()
{
 fast;
 long long int n,m,t;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  long long int i=0;
  cin>>s;
  set<char>res;
  long long int j=s.length()-1;
  
  while(i<j){
   if(s[i]==s[j]){
    i++;
    j--;
    }
   else{
    res.insert(s[i]);
    res.insert(s[j]);
    break;
  }}long long int ans=1e6;
 if(res.size()==0)cout<<0<<endl;
 else{
 for(auto v:res){
 string s1(s);
 long long int som=0;
 bool test=true;
 long long int i=0;
 long long int j=s1.length()-1;
 while(i<j){
   if(s1[i]==s1[j]){
    i++;
    j--;
    }
   else if(s1[i]==v){
    som++;
    i++;}
   else if(s1[j]==v){
    som++;
    j--;}
   else{
    test=false;
    break;
  }}
if(test==true){
 ans=min(ans,som);}
 
}
if(ans==1e6)cout<<-1<<endl;
else{
cout<<ans<<endl;}}
 
 
 
 
 
 
}
 
 
 
  
 
  
 
 
 
 
 
return 0;}