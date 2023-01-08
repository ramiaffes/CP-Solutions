#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0;
int main()
{
 fast; 
 string s;
 long long int n,m,k,x,y;
    cin>>n>>k;
    vector<long long int>vect(n);
    for(long long int i(0);i<n;i++)cin>>vect[i];
    set<long long int>res;
    for(long long int i(k-1);i<n;i++){
  res.insert(vect[i]);
  }
 if(res.size()!=1){
  cout<<-1<<endl;}
 else{
  long long int j=k-2;
  while((j>=0)and(res.size()==1)){
   res.insert(vect[j]);
   j--;}
  j++;
  if(res.size()!=1)
  cout<<(j+1)<<endl;
  else cout<<j<<endl;}
    
    
 
 
 
 
    
return 0;} 