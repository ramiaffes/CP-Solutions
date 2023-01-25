#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n,m,a,b;
 cin>>n>>m;
 vector<long long int>vect;
 long long int som=0;
 long long int com=0;
 for(long long int i(0);i<n;i++){
  cin>>a>>b;
  som+=a;
  if(b<a)
  vect.push_back(a-b);}
 sort(vect.begin(),vect.end());
 long long int i=vect.size()-1;
 while((i>=0)and(som>m)){
  som-=(vect[i]);
  com++;
  i--;}
 if(som>m)cout<<-1<<endl;
 else cout<<com<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}