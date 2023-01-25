 
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int n,t,q;
   cin>>t;
   while(t--){
    cin>>n;
    vector<long long int>vect(n);
    vector<long long int>res(2);
    for(long long int i(0);i<n;i++)cin>>vect[i];
    sort(vect.begin(),vect.end());
    int test=0;
    long long int j=n-1;
    while(j>=0){
    if(vect[j]%2==test){
     res[test]+=vect[j];}
  j--;
  test=1-test;
   }
   if(res[0]==res[1])cout<<"Tie"<<endl;
   else if(res[0]<res[1])cout<<"Bob"<<endl;
   else cout<<"Alice"<<endl;
    }
 
 
 
 
return 0;}