#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,k,a,b;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  map<long long int,long long int>vis;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<n;i++){
   string s=to_string(vect[i]);
   vis[s[s.length()-1]-'0']+=1;}
  bool test=false;
  for(long long int i(0);i<=9;i++){
   for(long long int j(0);j<=9;j++){
    for(long long int d(0);d<=9;d++){
     string se=to_string(i+j+d);
     if((se[se.length()-1]-'0')!=3){continue;}
     map<long long int,long long int>vis1;
     vis1[i]=vis[i];
     vis1[j]=vis[j];
     vis1[d]=vis[d];
     if(vis1[i]==0)continue;
     vis1[i]--;
     if(vis1[j]==0)continue;
     vis1[j]--;
     if(vis1[d]==0)continue;
     test=true;break;
    }if(test==true)break;}if(test==true)break;}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
 