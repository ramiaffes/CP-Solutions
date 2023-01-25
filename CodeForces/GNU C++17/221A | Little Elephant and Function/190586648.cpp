#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast;
 int n;
 cin>>n;
 if (n==1){
  cout<<1;}
 else          {
 cout<<n<<" ";
 for (int i=1;i<n;i++) {
  cout<<i<<" ";}
 
        }
 return 0;
}