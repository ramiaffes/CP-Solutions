#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n;
 cin>>n;
 long long int som=0;
 string s,res;
 map<string,bool>vis;
 map<long long int,bool>vis1;
 for(long long int i(0);i<n;i++){cin>>s;string s1(s.length(),'1');for(long long int c(0);c<s.length();c++){s1[c]=tolower(s[c]);}vis[s1]=1;}
 cin>>res;
 string res1(res.length(),'1');
 char lett;
 cin>>lett;
 lett=tolower(lett);
 long long int n1=res1.length();
 for(long long int c(0);c<res.length();c++){res1[c]=tolower(res[c]);}
 for(long long int i(0);i<n1;i++){
  for(long long int j(i);j<n1;j++){
   string s2=res1.substr(i,j-i+1);
   if(vis[s2]==1){
    for(long long int d(i);d<=j;d++){
     vis1[d]=1;
     }}}}
 for(long long int i(0);i<n1;i++){
  if(vis1[i]==1){
   if(res1[i]!=lett){
   res1[i]=lett;}
   else{
    for(long long int cm(0);cm<26;cm++){
     char var=97+cm;
     if(var!=lett){res1[i]=var;break;}}}}}
 for(long long int i(0);i<n1;i++){
  if(isupper(res[i])){
   res1[i]=toupper(res1[i]);}}
 cout<<res1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}