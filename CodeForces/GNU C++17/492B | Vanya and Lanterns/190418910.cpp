#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
 fast; 
 long long int n,q,k,l,r,x,y;
 cin>>n>>l;
 vector<int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
   double ans=0;
   double re=vect[0];
  double re1=vect[vect.size()-1];
 ans=max(ans,re);
 ans=max(ans,l-re1);
 for(long long int i(0);i<(vect.size()-1);i++){
    double val=vect[i+1]-vect[i];
  ans=max(ans,val/2);}
 printf("%.12f",ans);
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}