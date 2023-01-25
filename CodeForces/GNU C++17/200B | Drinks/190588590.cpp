#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast;
 int n;
 float som(0);
 cin>>n;
 vector<int> tab(n);
 for (int i(0);i<n;i++){
  cin>>tab[i];
  som+=tab[i];}
  cout<<(som/n);
 
 
 
 return 0;
}