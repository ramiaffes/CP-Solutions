#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int n,m,x,q;
 string s;
 cin>>n>>m>>x;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>q;
 cin>>s;
 map<char,vector<pair<long long int,long long int>>>res;
 map<char,long long int>vis;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
    res[vect[i][j]].push_back(make_pair(i,j));
   vis[vect[i][j]]=1;}}
 long long int som=0;
 map<char,long long int>vis2;
 bool test1=true;
 for(long long int i(0);i<q;i++){
     if(vis2[s[i]]==1){
         continue;
     }
     if(vis2[s[i]]==2){som++;continue;}
  if((vis[s[i]]==1)and(s[i]!='S'))continue;
   if((vis[tolower(s[i])]==1)and(vis['S']==1)){
   bool test=false;
   for(auto v:res['S']){
       for(auto v1:res[tolower(s[i])]){
    long long int val1=abs(v.first-v1.first);
    long long int val2=abs(v.second-v1.second);
    if(sqrt(val1*val1+val2*val2)<=(x)){ 
        vis2[s[i]]=1;
     test=true;break;}}if(test==true)break;}
    if(test==false){
        vis2[s[i]]=2;
     som++;}}
  else{
   test1=false;break;}
 }
 if(test1==false)cout<<-1<<endl;
 else cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}