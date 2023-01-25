#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,string>hashing;
map<string,bool>vis;
 long long int power(long long int i,long long int j){
  long long int p=1;
  for(long long int d(0);d<j;d++){
   p=p;
   p*=(i);
  }
 return p;}
int main()
{
fast;
long long int n,x;
cin>>n>>x;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
sort(vect.begin(),vect.end());
long long int res=0;
for(long long int i(0);i<n;i++){
 res+=x*vect[i];
 if(x>1)x--;}
cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}