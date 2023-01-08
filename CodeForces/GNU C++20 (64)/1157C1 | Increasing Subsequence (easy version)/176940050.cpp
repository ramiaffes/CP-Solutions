#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
long long int N=1000;
int main()
{
 fast;
 long long int n,m;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int i=0;
 long long int j=n-1;
 long long int ans=0;
 while(i<=j){
  if((vect[j]>=vect[i])and(vect[i]>ans)){
   ans=max(ans,vect[i]);
   s.append("L");
   i++;}
 else if((vect[j]>=vect[i])and(vect[j]>ans)){
  ans=max(ans,vect[j]);
  s.append("R");
  j--;}
 else if(vect[j]>=vect[i])break;
 else if((vect[i]>=vect[j])and(vect[j]>ans)){
  s.append("R");
  ans=max(ans,vect[j]);
  j--;}
 else if((vect[i]>=vect[j])and(vect[i]>ans)){s.append("L");
  ans=max(ans,vect[i]);
  i++;}
 else break;
  }
 
cout<<s.length()<<endl;
cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}