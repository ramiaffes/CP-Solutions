#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int n,a,b,low,high;
 cin>>a>>b;
 vector<long long int>vect;
 long long int i;
  for(i=1;i<sqrt(gcd(a,b));i++){
   if(gcd(a,b)%i==0){vect.push_back(i);
    vect.push_back(gcd(a,b)/i);}
   }
  if(i*i==gcd(a,b))vect.push_back(i);
 sort(vect.begin(),vect.end());
 cin>>n;
 while(n--){
  cin>>low>>high;
  vector<long long int>::iterator  maxind=lower_bound(vect.begin(),vect.end(),low);
  if(maxind==vect.end())cout<<-1<<endl;
  else if(*maxind>high)cout<<-1<<endl;
  else{
   long long int j=vect.size()-1;
   while(vect[j]>high)j--;
   cout<<vect[j]<<endl;}
  
 
  
  }
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}