#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int  n,m;
 cin>>n>>m;
 map<long long int,long long int>mymap1;
 map<long long int,long long int>mymap2;
 vector<long long int>vect(n);
 vector<long long int>result(m);
 for(long long int i(1);i<=n;i++){
  vect[i-1]=i%5;
  mymap1[vect[i-1]]++;}
 for(long long int i(1);i<=m;i++){
  result[i-1]=i%5;
  mymap2[result[i-1]]++;}
 long long int num=mymap1[0]*mymap2[0]+mymap1[1]*mymap2[4]+mymap1[2]*mymap2[3]+mymap1[3]*mymap2[2]+mymap1[4]*mymap2[1];
 cout<<num<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}