#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n,d;
 string s;
 cin>>n>>d;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 long long int ans=1e9;
 for(long long int i(0);i<n;i++){
  long long int d1=0;
  while((d1<i)and((vect[i]-vect[d1])>d)){
   d1++;}
  if((vect[i]-vect[d1])<=d)
  ans=min(ans,n-i-1+d1);
    }
 cout<<ans<<endl;
 
 
 
 
 
 
return 0;}