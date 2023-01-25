#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int a,b;
 cin>>a;
 cin>>b;
 if(a==b){
  cout<<a<<" "<<0;}
 else{
  cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
  }
 
 
 return 0;
}
 