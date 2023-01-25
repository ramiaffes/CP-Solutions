#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
map<long long int,bool>vis;
 
int main()
{
 fast;
    long long int n;
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++){cin>>vect[i];}
   bool test=false;
   for(long long int i(0);i<(n);i++){
    for(long long int j(0);j<(n);j++){
     for(long long int d(0);d<n;d++){
      if(((vect[i]+vect[j])==vect[d])and(i!=j)and(d!=i)and(j!=d)){
       cout<<(d+1)<<" "<<(j+1)<<" "<<(i+1)<<endl;
       test=true;break;}
      }
      if(test==true)break;}if(test==true)break;}
    
  if(test==false)cout<<-1<<endl;
   
   
 
 
 
 
 
 
return 0;}