#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>hashing;
map<string,bool>vis;
bool cmp(pair<long long int, long long int> a,
         pair<long long int, long long int> b)
{
    return a.second <= b.second;
}
int main()
{
fast;
long long int n,k;
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];}
sort(vect.begin(),vect.end());
long long int som=0;
for(long long int i(0);i<k;i++){
 som+=vect[i];}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}