#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t;
 cin>>t;
 long long int a,b,c;
 while(t--){
  cin>>a>>b>>c;
  cout<<a+b+c-2<<endl;}
  
 return 0;
}