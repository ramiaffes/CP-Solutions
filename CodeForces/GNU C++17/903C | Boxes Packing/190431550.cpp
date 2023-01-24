#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n,k;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
sort(vect.begin(),vect.end());
long long int val=0;
long long int som=0;
for(long long int i(0);i<(n-1);i++){
 if(vect[i]!=vect[i+1]){
  som=max((hashing[vect[i]]+som-hashing[vect[i+1]]),val);}}
cout<<(som+hashing[vect[n-1]])<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}