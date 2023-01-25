#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
  
int main()
{
 fast;
 long long int k,n;
cin>>n>>k;
vector<long long int>vect(n);
long long int res=0;
for(long long int i(0);i<n;i++)cin>>vect[i];
bool test=false;
while(test==false){test=true;
for(long long int i(0);i<(n-1);i++){
 if(vect[i]==vect[i+1]){
  continue;}
 else{
  test=false;
  vect[i]++;}}if(test==false)res++;if(vect[n-1]!=k){vect[n-1]++;if(test==true){test=false;res++;}}}
cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}