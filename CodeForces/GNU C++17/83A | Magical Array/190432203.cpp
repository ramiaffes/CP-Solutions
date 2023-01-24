#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 string s;
 long long int n,x,y;
 cin>>n;
 long long int res=0;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
}
long long int som=1;
for(long long int i(0);i<(n-1);i++){
 if(vect[i]==vect[i+1]){
  som++;
  }
 else{
  res+=(som+1)*(som)/2;
  som=1;}}
res+=(som+1)*(som)/2;
cout<<res<<endl;
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}