#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
long long power(long long x,long long y)
{
    long long ans=1;
    while (y){
        if (y&1) ans=ans*x%M;
        x=x*x%M;
        y=y>>1;
    }
    return ans;
}
 
int main()
{
 fast;
 long long int n,m;
 cin>>n>>m;
 long long int som=power(2,m)-1;
 cout<<power(som,n)<<endl;
 
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}