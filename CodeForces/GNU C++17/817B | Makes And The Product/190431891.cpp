#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
long long int nCr(long long int n,long long int k)
{
    long long int ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int main()
{
 fast;
 long long int n;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 long long int i=0;
 while((i<n)and(vect[i]==vect[0])){
  i++;}
 if(i>=3){
  cout<<nCr(i,3)<<endl;}
else{
long long int j=i;
while((j<n)and(vect[j]==vect[i])){
 j++;}
if((i==1)and(j>=3)){
 long long int val=nCr(i,1)*nCr(j-i,2);
 cout<<val<<endl;}
else if((i==2)and(j>=3)){
 long long int val=nCr(i,2)*nCr(j-i,1);
 cout<<val<<endl;}
else{
 long long int d=j;
 while((d<n)and(vect[d]==vect[j])){
 d++;}
 long long int val=nCr(j-i,1)*nCr(i,1)*nCr(d-j,1);
 cout<<val<<endl;
 }
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}