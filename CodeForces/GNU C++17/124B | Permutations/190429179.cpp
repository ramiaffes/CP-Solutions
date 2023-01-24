#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
long long int factorial(long long int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int main()
{
 fast;
 long long int k,n;
 cin>>n>>k;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
 }
long long int ans=1e9;
long long int ans1=0;
long long int ans3=1e9;
vector<long long int>ind(k);
for(long long int i(0);i<k;i++){
 ind[i]=i;
 }
for(long long int i(0);i<factorial(k);i++){
 next_permutation(ind.begin(),ind.end());ans=1e9;
  ans1=0;
 for(long long int i(0);i<n;i++){
  string s1(n,'a');
  for(long long int j(0);j<k;j++){
   s1[j]=vect[i][ind[j]];}
  long long int val=stoll(s1);
  ans=min(ans,val);
  ans1=max(ans1,val);
  }
 
 ans3=min(ans3,ans1-ans);
 }
cout<<ans3<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}