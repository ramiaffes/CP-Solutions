#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=50;
 
int main()
{
 fast; 
 long long int n,t,a,b;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect23(n);
  map<long long int,long long int>vis2;
  for(long long int i(0);i<n;i++){cin>>vect23[i];vis2[vect23[i]]+=1;}
  auto it1=max_element(vect23.begin(),vect23.end());
  if((vect23.size()==1)and(vect23[0]==1)){
   cout<<"YES"<<endl;
   }
  else if((vis2[*it1-1]>=1)or(vis2[*it1]>=2)){
   cout<<"YES"<<endl;}
  else cout<<"NO"<<endl;
  }
 
 
 
 
 
return 0;}