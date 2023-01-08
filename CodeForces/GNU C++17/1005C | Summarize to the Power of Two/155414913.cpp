#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int ans=0;
 map<long long int,long long int>vis;
 for(long long int i(0);i<n;i++){cin>>vect[i];vis[vect[i]]+=1;}
 sort(vect.begin(),vect.end());
 if(n==1){
 ans=vect[n-1];}
 else{
  ans=vect[n-1]+vect[n-2];}
 long long int p=1;
 vector<long long int>res;
 while(p<=ans){
  res.push_back(p);
  p*=2;}
long long int som1=0;
bool test=true;
for(long long int i(0);i<n;i++){test=false;
 for(auto v:res){
  if((vis[v-vect[i]]>=1)and(((v-vect[i])!=vect[i])or(vis[v-vect[i]]>=2))){
   test=true;
   break;}
  }if(test==false){vis[vect[i]]--;som1++;}}
cout<<som1<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  