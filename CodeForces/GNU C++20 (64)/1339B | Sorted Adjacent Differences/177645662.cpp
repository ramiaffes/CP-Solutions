#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
int main()
{
 fast;
string s;
long long int n,v,t;
cin>>t;
while(t--){
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
sort(vect.begin(),vect.end());
long long int i=0;
long long int j=n-1;
deque<long long int>res;
while(i<j){
 res.push_front(vect[i]);
 res.push_front(vect[j]);
 i++;
 j--;}
if(i==j)
res.push_front(vect[i]);
for(auto v:res)cout<<v<<" ";
cout<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}