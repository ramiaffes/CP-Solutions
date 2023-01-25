#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int val2=1e6;long long int som=0;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int val=0;
 for(long long int i(n-1);i>=1;i--){
  if(i<val2){som++;}
  long long int j=i-vect[i];
  val2=min(val2,max(val,j));
  }
 if(0<val2)som++;
 cout<<som<<endl;
 
  
 
  
 
 
 
 
 
return 0;}