#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 bool test=true;
 vector<long long int>vect(n);
 long long int min1=1e9;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(min1>=vect[i])min1=vect[i];}
 long long int i=0;
 while((i<n)){
  if(vect[i]%min1!=0){test=false;break;}
  i++;}
 if(test==false)cout<<-1<<endl;
 else cout<<min1<<endl;
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}