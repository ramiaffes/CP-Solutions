#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int  n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  if(n==1)cout<<0<<endl;
  else {
  long long int ans=max(vect[n-1]-*(min_element(vect.begin(),vect.begin()+n-1)),*(max_element(vect.begin()+1,vect.end()))-vect[0]);
  deque<long long int>res(vect.begin(),vect.end());
  for(int i=0;i<n;i++){
   long long int val=res[0];
   res.pop_front();
   res.push_back(val);
   ans=max(ans,res[n-1]-res[0]);}
  cout<<ans<<endl;}
  }
return 0;}