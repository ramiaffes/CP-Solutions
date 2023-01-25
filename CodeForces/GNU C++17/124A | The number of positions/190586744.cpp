 
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int n,a,b;
 cin>>n>>a>>b;  
 cout<<min(n-a,b+1);
 
 
 
 return 0;
}