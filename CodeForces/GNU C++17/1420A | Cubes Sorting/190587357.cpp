#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
bool comp(int val,int var){
 return(var>val);}
bool distinct(vecteur vect,int n){
 auto it= unique(vect.begin(),vect.end());
  vect.resize( distance(vect.begin(),it) );
 return (n==vect.size());}
int main()
{
 
 fast; 
 int t,n;
 cin>>t;
 
 while(t--){
  cin>>n;
  vecteur vect(n);
  for (int i(0);i<n;++i){
   cin>>vect[i];
   }
  reverse(vect.begin(),vect.end());
  if (is_sorted(vect.begin(),vect.end()) and distinct(vect,n)==true){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;}
  
  }
 
 
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}