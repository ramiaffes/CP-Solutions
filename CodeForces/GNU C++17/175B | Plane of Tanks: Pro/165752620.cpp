#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
long long int ans=1e9;
long long int som=0;
int main()
{
 fast; 
 long long int n1,s,x,y,m;
 cin>>n1;
 vector<pair<string,long long int>>vect(n1);
 map<string,long long int>hashing;
 vector<long long int>res;
 for(long long int i(0);i<n1;i++){cin>>vect[i].first>>vect[i].second;hashing[vect[i].first]=max(hashing[vect[i].first],vect[i].second);}
 for(auto v:hashing){
     res.push_back(v.second);
 }
 sort(res.begin(),res.end());cout<<hashing.size()<<endl;
 for(auto v:hashing){
  auto it1=upper_bound(res.begin(),res.end(),v.second);
  long long int n=hashing.size();
  long double val=(n-(it1-res.begin()));
  long double val1=(it1-res.begin()-1)+1;
 if(((val/n)*100)>50){
   cout<<v.first<<" "<<"noob"<<endl;continue;}
  if((((val/n)*100)>20)and(((val1/n)*100)>=50)){
   cout<<v.first<<" "<<"random"<<endl;continue;}
  if((((val/n)*100)>10)and(((val1/n)*100)>=80)){
   cout<<v.first<<" "<<"average"<<endl;continue;}
  if((((val/n)*100)>1)and(((val1/n)*100)>=90)){
   cout<<v.first<<" "<<"hardcore"<<endl;continue;}
  if(((val1/n)*100)>=99){
   cout<<v.first<<" "<<"pro"<<endl;continue;}
  }
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}