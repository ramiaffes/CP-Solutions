#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t,n; 
 cin>>t;
 vecteur vect;
 while(t--){
  cin>>n;
  stringstream ss;
  ss<<n;
  string s;
  ss>>s;
  int r=s.size();
  for (int i(0);i<r;++i){
   if (num(s[i])!=0){
   int sk=num(s[i])*(pow(10,(r-1-i)));
   vect.push_back(sk);}
   }
  int  d=vect.size();
  cout<<d<<endl;
  for (int i(0);i<d;++i){
   cout<<vect[i]<<" ";}
   cout<<endl;
   vect.clear();
  }
 
 
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}