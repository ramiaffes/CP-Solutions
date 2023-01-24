#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m,d;
 cin>>n;
 long long int som=0;
 long long int som1=0;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>res;
 for(long long int i(0);i<n;i++){
 if((som+vect[i])<0){
  if(res.empty())continue;
  if(vect[i]>res[0]){
   som-=res[0];
   som+=vect[i];
   res.erase(res.begin());
   res.push_back(vect[i]);
   }
  else{
   continue;}
  }
 else{
  som+=vect[i];
  som1++;
  if(vect[i]<0){
   res.push_back(vect[i]);}}
 sort(res.begin(),res.end());}
cout<<som1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}